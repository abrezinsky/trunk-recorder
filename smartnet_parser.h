#ifndef SMARTNET_PARSE_H
#define SMARTNET_PARSE_H
#include "parser.h"
#include <iostream>
#include <vector>

#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/tokenizer.hpp>

#define OSW_BACKGROUND_IDLE     0x02f8
#define OSW_FIRST_CODED_PC      0x0304
#define OSW_FIRST_NORMAL        0x0308
#define OSW_FIRST_TY2AS1        0x0309
#define OSW_EXTENDED_FCN        0x030b
#define OSW_AFFIL_FCN           0x030d
#define OSW_TY2_AFFILIATION     0x0310
#define OSW_TY1_STATUS_MIN      0x0310
#define OSW_TY2_MESSAGE         0x0311
#define OSW_TY1_STATUS_MAX      0x0317
#define OSW_TY1_ALERT           0x0318
#define OSW_TY1_EMERGENCY       0x0319
#define OSW_TY2_CALL_ALERT      0x0319
#define OSW_FIRST_ASTRO         0x0321
#define OSW_SYSTEM_CLOCK        0x0322
#define OSW_SCAN_MARKER         0x032b
#define OSW_EMERG_ANNC          0x032e
#define OSW_AMSS_ID_MIN         0x0360
#define OSW_AMSS_ID_MAX         0x039f
#define OSW_CW_ID               0x03a0
#define OSW_SYS_NETSTAT         0x03bf
#define OSW_SYS_STATUS          0x03c0

class SmartnetParser:public TrunkParser
{
	int lastcmd;
	long lastaddress;
public:
	SmartnetParser();
	double getfreq(int cmd);
	std::vector<TrunkMessage> parse_message(std::string s);
};
#endif

#ifndef __IOSYS_H__
#define __IOSYS_H__

#include<cstdint>
#include<string>

#include<cstdarg>
#include"color.h"
#define INCLUDEVARS extern uint16_t choice;extern bool shouldLoopThroughSelection;extern uint16_t gazeCounter;extern bool watchedByVoid; //legacy, don't use anymore.

constexpr int stdTime = 15;
void getUserInput();
void typePrint(std::string input, uint32_t delay = stdTime /*,char color*/);
void error();
void xorShift32(uint32_t &a);
void changeColor(char* c);


#endif

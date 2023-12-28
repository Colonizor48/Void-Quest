#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<chrono>
#include<thread>
#include "color.h"
#include "IOsys.hpp"
#include "state.hpp"

void typePrint(std::string input, uint32_t delay /*,char color*/)
{
    std::string outputstr(input);
    for (uint32_t i = 0; i < outputstr.size(); i++) // Fixed the loop condition and size function
    {
        using namespace std::chrono_literals;
        putchar(outputstr.at(i));
        std::this_thread::sleep_for(std::chrono::milliseconds(delay)); // Use 'delay' instead of 'input'
    }
}

void getUserInput()
	{
		userState.shouldLoopThroughSelection = true;
		typePrint("\nWhat will you do:");
		scanf("%d", &userState.choice);
		if(userState.choice == -1)
			{
				exit(0);
			}
	}
void error()
	{
		typePrint("\nInvalid Input");
		userState.choice = 0;
		userState.shouldLoopThroughSelection = true;
	}

void xorShift32(uint32_t &a)
	{
		a ^= a << 13;
		a ^= a >> 17;
		a ^= a << 5;
	}

void changeColor(char* c)
	{
		printf(c);
	}

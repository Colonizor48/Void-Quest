#include<cstdio>
#include<cstdlib>
#include<iostream>
#include "IO/IOsys.hpp"
#include "IO/state.hpp"
#include "callForHelpChain/callForHelpChain.hpp"
#include "cryChain/cryChain.hpp"



//****************************************************************************************************************************************************************
// Code by Poeta Kodu on stack overflow. Thank you so much!(link: https://stackoverflow.com/questions/70792553/exe-not-working-properly-outside-of-visual-studio)*
//****************************************************************************************************************************************************************
#ifdef _WIN32

#include <Windows.h>

void enableColors()
{
    DWORD consoleMode;
    HANDLE outputHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    if (GetConsoleMode(outputHandle, &consoleMode))
    {
        SetConsoleMode(outputHandle, consoleMode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    }
}

#endif




int main(int argc, char** argv)
    {
        
        //some function here to display a cool, ascii art logo eventually.
        enableColors();
        typePrint("You wake up in a dark, empty room, alone. Looking around, there is nothing, anywhere. Is is just a void of pure, pitch black.", 30);
        typePrint("\nYou have no idea where you are. Now thinking about it, you can't remember much about *who* you are either.", 20);
        changeColor(RED);
        typePrint("\nWhat even are you?", 100);
        changeColor(CRESET);
        userState.shouldLoopThroughSelection = true;
        while(userState.shouldLoopThroughSelection)
        {
        typePrint("\n\nOptions:");
        typePrint("\n1. Look down at yourself.");
        typePrint("\n2. Look around.");
        typePrint("\n3. Sit on the floor and cry.");
        typePrint("\n4. Call for help");
        typePrint("\n(Note, type -1 in as your choice at any time to exit)");
        getUserInput();
        switch(userState.choice)
            {
                case 1:
                typePrint("You look down at your body.");
                typePrint("\nYou can't even recognize yourself.", 50);
                changeColor(RED);
                typePrint("\nHow Pathetic.", 120);
                changeColor(CRESET);
                //maybe add a flag here for later.
                userState.shouldLoopThroughSelection = true;
                break;

                case 2:
                typePrint("You look around.");
                typePrint("\n........", 40);
                typePrint("You notice a wall in the distance, and you go over to it.")
                //handleLookAround();
                userState.shouldLoopThroughSelection = true;

                break;
                
                case 3:
                typePrint("You want to just sit down and cry, however");
                typePrint(".........", 30);
                changeColor(RED);
                typePrint("\nYou can't even cry anymore.");
                handleCry();
                userState.shouldLoopThroughSelection = true;

                break;

                case 4:
                typePrint("You call for help");
                typePrint("\n..........", 180);
                changeColor(RED);
                typePrint("\nBut nobody came.");
                changeColor(CRESET);
                userState.callForHelpCounter++;
                if(userState.callForHelpCounter == 5)
                    {
                        typePrint("\nYou begin to cry.");
                        handleSecretCallForHelpChain();
                    }
                
                else
                {
                }
                userState.shouldLoopThroughSelection = true;
                break;

                default:
                error();
                break;


            }
        }
    }
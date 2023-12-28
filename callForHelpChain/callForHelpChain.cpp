#include "../IO/IOsys.hpp"
#include "../IO/state.hpp"
#include "../IO/color.h"



void callForHelp()
    {
        switch(userState.callForHelpCounter)
        {
            case 5:
            typePrint("You call for help");
            typePrint("\n..........", 180);
            changeColor(RED);
            typePrint("\nBut nobody came.");
            changeColor(CRESET);
            break;
            case 6:
            typePrint("You call for help yet again.");
            typePrint("\n..........", 180);
            changeColor(RED);
            typePrint("\nBut nobody came.");
            changeColor(CRESET);
            break;
            case 7:
            typePrint("You loudly plead for someone, anyone to come help you.", 50);
            typePrint("\n..........", 180);
            changeColor(RED);
            typePrint("\nBut nobody came.", 120);
            changeColor(CRESET);
            userState.oneOptionInCallChain == true;
            break;
            case 8:
            typePrint("You scream into the void, hoping someone, anyone, will hear you.", 60);
            typePrint("\n..........", 180);
            changeColor(RED);
            typePrint("\nBut nobody came.");
            changeColor(CRESET);
            case 9:
            typePrint("You beg for anyone to come help you.", 60);
            typePrint("\n..........", 180);
            changeColor(RED);
            typePrint("\nBut nobody came.", 120);
            changeColor(CRESET);
            break;
            case 10:
            typePrint("Not like they would understand, anyways.", 90);
            changeColor(CRESET);
            break;
            case 11:
            typePrint("\nIt seems that you shall be lost in this dark, endless void forever, totally disconected from anything.");
            changeColor(RED);
            typePrint("\nBut nobody came.", 120);
            changeColor(CRESET);
            break;
            case 12:
            typePrint("\nEven if they could hear you, would they even bother helping?");
            typePrint("\nYou quietly plead, one last time, for someone, anyone to come help you...");
            changeColor(RED);
            typePrint("\nBut nobody came.", 240);
            typePrint("\nNobody cares.", 240);
            changeColor(CRESET);
            break;
            case 13:
            typePrint("\nYou're totally resigned to this fate. Why bother trying to get out?");
            changeColor(CRESET);
            break;
            case 14:
            typePrint("Out of nowhere, you finally hear a mysterious voice....", 50);
            typePrint("\n.....", 60);
            typePrint("\nIt says \"Why don't you just try leaving?\"");
            typePrint("\nGeez, why didn't you think of that?");
            changeColor(CRESET);
            break;
            case 15:
            typePrint("You conisder looking for a wall.... but you can't bring yourself to stand up.", 50);
            break;
            case 16:
            typePrint("You feel yourself starting to loose touch with reality.", 50);
            break;
            case 17:
            typePrint("You think that maybe you're just making a big deal out of nothing, yet ignoring it never made it go away.", 50);
            break;
            case 18:
            typePrint("You try to think of humor to cope.... but you can't think of anything.", 50);
            break;
            case 19:
            typePrint("You conisder just ending it all.", 50);
            break;
            case 20:
            typePrint("This might be bad timing but uh.... this is the end of Alpha 0.0 content. Check back later for more stuff!");
            typePrint("................", 1000);
            exit(0);
            



        }
        userState.callForHelpCounter++;
    }


void handleSecretCallForHelpChain()
    {
        userState.shouldLoopThroughSelection = true;
        while(true)
        {
        typePrint("\n\nOptions:");
        if(userState.oneOptionInCallChain == false)
        {
        typePrint("\n4. Call for help");
        typePrint("\n4. Call for help");
        typePrint("\n4. Call for help");
        }
        typePrint("\n4. Call for help");
        getUserInput();

        switch(userState.choice){
            case 1:
            typePrint("\nYou can't bring yourself to do anything other then call for help.");
            break;
            case 2:
            typePrint("\nYou can't bring yourself to do anything other then call for help.");
            break;
            case 3:
            typePrint("\nYou're already doing this...");
            break;
            case 4:
            callForHelp();
        }
    }
    }



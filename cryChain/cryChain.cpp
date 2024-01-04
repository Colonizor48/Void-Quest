#include "cryChain.hpp"
#include "../IO/IOsys.hpp"
#include "../IO/state.hpp"
#include "../IO/color.h"
__CRYCHAIN_H__





void handleCry()
{
    typePrint("\nAll you want to do is sit down and cry yet......");
    typePrint("\n\nOptions:");
    typePrint("\n1. Men don't cry.");
    typePrint("\n2. You feel nothing.");
    getUserInput();
    cStart:
    switch(userState.choice)
        {
            case 1:
            typePrint("\nYeah, men don't cry");
            typePrint("\nmen dont....", 50);
            typePrint("\nYeah, they don't cry.");
            typePrint("\n(this will acomplish nothing)");
            typePrint("\nYou collapse, and suddenly black out, loosing consciousness");
            typePrint("\n..........", 100);
            changeColor(RED);
            typePrint("\nBAD END", 100);
            typePrint("\n........", 100);
            userState.shouldLoopThroughSelection = false;
            break;

            case 2:
            typePrint("\nGod, you just want to feel somthing, anything yet....");
            typePrint("\nNothing....", 50);
            changeColor(RED);
            typePrint("\nEmptyness....", 50);
            changeColor(CRESET);
            typePrint("\nYet..... perhaps you are closer then you realize to an end....");
            typePrint("\n...... You.... see a light up ahead, go towards it?");
            handleLight();
            break;

            default:
            error();
            goto cStart;
            break;
        }

}


void handleLight()
    {
       
        typePrint("\n 1:Yes");
        typePrint("\n 2:No");

        switch(userState.choice)
            {
                case 1:
                typePrint("\n You go towards the light and.......");
                typePrint("\n You find an exit. You go in and.... you feel nothing but bliss....");
                typePrint("GOOD END", 40)
                typePrint("......", 40);
                exit(0);
            }
    }


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
    switch(userState.input)
        {
            case 1:
            typePrint("\nYeah, men don't cry");
            typePrint("\nmen dont....", 50);
            typePrint("\nYeah, they don't cry.");
            typePrint("\n(this will acomplish nothing)");
            typePrint("\nYou collapse, and suddenly black out, loosing consciousness");
            typePrint("\n..........", 100);
            changeColor(RED);
            typePrint("BAD END", 100);
            typePrint("\n........", 100)
            userState.shouldLoopThroughSelection = false;
            break;

            break;

            case 2:
            typePrint("\nGod, you just want to feel somthing, anything yet....");
            typePrint("\nNothing....", 50);
            changeColor(RED);
            typePrint("\nEmptyness....", 50);
            changeColor(CRESET);
            typePrint("\nYet..... perhaps you are closer then you realize to an end....");
            typePrint("...... You ")
        }

}

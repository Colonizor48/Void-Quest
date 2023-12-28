#ifndef STATE_H
#define STATE_H

struct state {
    short choice;
    bool shouldLoopThroughSelection;
    unsigned short int voidCounter;
    unsigned short int callForHelpCounter;
    bool oneOptionInCallChain;
    // other members...
};


extern state userState;

#endif // MYSTRUCT_H

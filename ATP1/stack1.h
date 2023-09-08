#ifndef STACK1_H
#define STACK1_H

#include "deck.h"
#include "nipe1.h"

const int MaxCARDS = 26;

class stack{
    public:

    void Push(bool dps, deck carta);

      bool Empty(bool dps);
      bool Full(bool dps);

    void Pop(deck &carta, bool dps);
    void Top(deck &carta, bool dps);
    
  

    private:
    deck carta[MaxCARDS];
    int dps_top;
    int ats_top;
    
    }
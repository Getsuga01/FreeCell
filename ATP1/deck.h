#ifndef DECK_H
#define DECK_H

#include "nipe1.h"

class deck{
    public:
    int card;
    Nipe nipe1;

    private:
    Deck(int c = 0, Nipe n1 = Nipe(0, ""));
    int EntNipe();
    Nipe EntNipe();
}

#endif
```
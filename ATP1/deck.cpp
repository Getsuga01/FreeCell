
#include "deck.h"
#include "nipe1.h"
#include <iostream>
#include <string>
using namespace std;

Deck::Deck(int c,int d){
    if(c < 0 || c > 13 || d < 0 || d > 13){
        cout << "Valor invalido" << endl;
        card = -1;
        nipe1 = Nipe(-1, "");
        abort();
    }

    string cor = (d == 0 || d == 1) ? "Vermelho" : "Preto";
    
    card = c;
    nipe1 = Nipe(d, cor);

}
int Deck::EntCard(){
    return card;
}

Nipe Deck::EntNipe(){
    return nipe1;
}



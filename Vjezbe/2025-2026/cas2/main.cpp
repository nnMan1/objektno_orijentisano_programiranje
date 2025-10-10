
//Ugao (ugao u radijanima) //ako ugao nije u opsegu 0-2pi cuvati odgovarajuci ugao u opsegu 0-2pi
    //set step - uzima ugao u stepenima
    //set rad
    // get step
    // get rad
    // stampaj
    // plus  
    // minus

//Stek cijelih brojeva
    //prazan konstruktor, inicijalizuje stek kapaciteta 10 elemenata +
    //destruktor +
    //dodavanje u stek, ako je stek pun prosiriti mu kapacitet +
    //da li je stek prazan +
    //uzimanje sa vrha steka, ako je stack prazan stampa odgovarajucu poruku i vraca 0
    //uklanjanje sa vrha steka, i vraca vrijednost uklnonjenog elementa +

#include <iostream>
#include <math.h>
#include "ugao.h"

using namespace std;

int main() {

    cout << "Program sa uglovima" << endl;
    Ugao u1;

    u1.set_rad(M_PI / 2 + 5 * M_PI);
    cout << u1.get_step() << endl;
    u1.stampaj();

    Ugao u2;
    u2.set_step(60);
    cout << u2.get_step() << endl;

    Ugao u3 = u1.plus(u2);

    cout << u3.get_step() <<endl;
    Ugao u4 = u2.minus(u1);

    cout << u4.get_step() <<endl;

    return 0;
}
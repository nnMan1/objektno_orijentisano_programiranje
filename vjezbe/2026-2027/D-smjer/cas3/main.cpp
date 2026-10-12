//Ugao (ugao u radijanima) 
    // ako ugao nije u opsegu 0-2pi 
    // cuvati odgovarajuci ugao u opsegu 0-2pi
    // konstruktor sa jednim argumentom
    // set step - uzima ugao u stepenima
    // set rad
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
    //void print() - stampa elemente stacka

#include <iostream>
// #include <math.h>
#include <cmath>
#include "Ugao.h"
#include "Stack.h"

using namespace std;

int main() {

    Ugao u1(250);
    u1.set_rad(500);
    cout << "u1 = " <<  u1.get_rad()  << "rad = " << 
                        u1.get_step() << "step" << endl;

    u1.set_step(120);

    cout << "u1 = " <<  u1.get_rad()  << "rad = " << 
                        u1.get_step() << "step" << endl;

    cout << "u1 = "; u1.stampa(); cout << endl; 

    Ugao u2(M_PI_2 * 3);
    Ugao u3 = u1.plus(u2);
    cout << u1.get_step() << "step + " << u2.get_step() << "step =  " << u3.get_step() << "step" << endl;

    u3 = u1.minus(u2);
    cout << u1.get_step() << "step - " << u2.get_step() << "step =  " << u3.get_step() << "step" << endl;

    Stack s1; //konstruktor bez argumenata

    s1.push(5);
    s1.push(9);
    s1.push(14);
    s1.push(4);
    Stack s2 = s1;


    cout << "s1.top() = " << s1.top() << endl;
    cout << "s1.remove() = " << s1.remove() << endl;
    cout << "s1.remove() = " << s1.remove() << endl;

    s1.push(13);

    cout << "s1 = "; s1.print(); cout << endl;
    cout << "s2 = "; s2.print(); cout << endl;

    return 0;
}
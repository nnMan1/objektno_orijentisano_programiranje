//Ugao (ugao u radijanima) 
    // ako ugao nije u opsegu 0-2pi 
    // cuvati odgovarajuci ugao u opsegu 0-2pi
    // set step - uzima ugao u stepenima
    // set rad
    // get step
    // get rad
    // stampaj
    // plus  
    // minus

//Stek uglova
    //prazan konstruktor, inicijalizuje stek kapaciteta 10 elemenata +
    //destruktor +
    //dodavanje u stek, ako je stek pun prosiriti mu kapacitet +
    //da li je stek prazan +
    //uzimanje sa vrha steka, ako je stack prazan stampa odgovarajucu poruku i vraca 0
    //uklanjanje sa vrha steka, i vraca vrijednost uklnonjenog elementa +
    //void stampaj - stampa elemente stacka kao cijele brojeve

#include <iostream>
#include <math.h>
#include "Ugao.h"
#include "Stack.h"

using namespace std;


int main() {
    Ugao u1(9.47);

    cout << "u1.get_rad = "  << u1.get_rad() << endl; 
    cout << "u1.get_step = "  << u1.get_step() << endl; 

    cout << endl;

    u1.set_rad(7);
    cout << "u1.get_rad = "  << u1.get_rad() << endl; 
    cout << "u1.get_step = "  << u1.get_step() << endl; 

    u1.set_step(60 + 360 * 2);
    cout << "u1.get_rad = "  << u1.get_rad() << endl; 
    cout << "u1.get_step = "  << u1.get_step() << endl; 

    Ugao u2(45);
    u2.set_step(45);

    Ugao u3 = u2.plus(u1);
    cout << u1.get_step() << " + " << 
        u2.get_step() << " = " << u3.get_step() << endl; 


    u3 = u2.minus(u1);
    cout << u1.get_step() << " + " << 
        u2.get_step() << " = " << u3.get_step() << endl; 
    
    Ugao u4(-29);    
    cout << "u4.get_step = "  << u4.get_step() << endl; 


    Stack s1;
    s1.push(u1);
    s1.push(u2);
    s1.push(u3);
    s1.push(u4);

    //Stack s2(s1);
    Stack s2 = s1; //poziva se konstruktor kopije => ovo je ok
    Stack s3 = s1; 

    //s2 = s3; // ne poziva se konstruktor kopije -> pravi problem

    cout << "s1 = "; s1.stampaj(); cout << endl;
    cout << "s2 = "; s2.stampaj(); cout << endl;

    s1.remove();
    s1.stampaj();

    return 0;
}
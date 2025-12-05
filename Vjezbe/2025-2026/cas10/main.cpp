#include <iostream>
#include "Tijelo.h"
#include "Sfera.h"
#include "Valjak.h"
#include "RedTijela.h"

using namespace std;

int main() {

    // Tijelo t1; //ne moze jer je tijelo apstraktna klasa
                  //apstraktna klasa sluzi samo kao osnovna klasa za izvodjenje
    
    Sfera s1(3), s2(5);
    cout << s1 << " " << s2 << endl;

    Valjak v1(2, 4), v2(3, 8) ;
    cout << v1 << " " << v2 << endl;

    RedTijela r1(10);
    RedTijela r2 = r1;
    RedTijela r3;
    r3 = r1;

    r1 += s1;
    r1 += v2;
    r1 += s1;

    cout << r1 << endl;

    Tijelo* t5 = &r1[0];

    cout << r1.get() << endl;
    cout << r1.pop() << endl;
    cout << r1.pop() << endl;



    return 0;
}
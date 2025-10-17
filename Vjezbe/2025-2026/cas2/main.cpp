
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
#include "stack.h"

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

    Stack s1(2);
    s1.push(10);
    s1.push(1);
    s1.push(15);

    const Stack s2 = s1;
    
    cout << "s1.top() = " << s1.top() << endl;
    cout << "s1.pop() = " << s1.pop() << endl;
    cout << "s1.top() = " << s1.top() << endl;

    s1.push(20);

    cout << "s1 = "; s1.print(); cout << endl;
    cout << "s2 = "; s2.print(); cout << endl;

    Stack s3 = s2;

    return 0;
}
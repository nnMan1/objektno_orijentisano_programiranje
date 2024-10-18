#include <iostream>
#include "Skup.h"

using namespace std;

/**
Napisati klasi za skup cijelih brojeva +
-  Konstruktor bez argumenata koji kreira prazan skup +
-  Konstruktor kopije
-  Konstruktor sa jednim argurmentom + // predstavlja 1 element skupa +
-  Medod dodaj(skup) // ubacuje elemente skupa koji je predat u
                        vec postojeci skup i vraca referencu
                        na skup nad kojim je pozvana metoda
- Medod unija(skup) //kreira novi skup koji je unija dva skupa +
- Razlika skupova
- ispis skupa na standardni izlaz +
- Medod size() //vraca kardinalnost skupa
*/

int main()
{
    Skup s1(2);
    //s1.print();

    Skup s2(5);

    Skup s3 = s1.unija(s2);
    Skup s4(4);

    s3.dodaj(s4).dodaj(9).dodaj(1);
    s3.print();
    return 0;
}

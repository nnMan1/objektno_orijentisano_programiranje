#include <iostream>
#include "Ugao.h"

using namespace std;
/**
Ugao - cuva ugao u radijanima
    //ako ugao nije u oopsegu 0-2pi izvrsiti noramalizaciju
    //set_rad
    //set step
    //get_rad
    //stampaj
    //dodaj
    //oduzme
    //plus
*/
int main()
{
    Ugao u1;
    cout << "u1_addr = " << &u1 <<endl;
    u1.set_rad(10);

    cout << u1.get_rad() <<endl;

    Ugao u2;
    cout << "u2_addr = " << &u2 <<endl;
    u2.set_rad(2);

    u2.set_step(180, 40, 15);
    cout << u2.get_rad() <<endl;

    Ugao u3 = u1.plus(u2);
    cout << u3.get_rad() <<endl;

    return 0;
}

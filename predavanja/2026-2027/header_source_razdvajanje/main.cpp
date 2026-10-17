#include <iostream>
#include "Racun.h"

int main ()
{
    Racun a("Marko Markovic", 1000); 
    a.uplata(200);
    a.isplata(50);
    std::cout << a.getStanje() << std::endl;

    return 0;
}



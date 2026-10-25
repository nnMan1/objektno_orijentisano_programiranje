#include <iostream>
#include "Izvod.h"

int main()
{
    Izvod a(3);

        std::cout << "a: " << a.uzmi(0) << " " << a.uzmi(1) << " " << a.uzmi(2) << "\n";


    a.postavi(0, 120.5);

    Izvod b = a;             // ugradjeno kopiranje
    b.postavi(0, 999.0);     // ova linija mijenja i nulti element u objektu a

    std::cout << "a: " << a.uzmi(0) << "\n";
    std::cout << "b: " << b.uzmi(0) << "\n";

    std::cout << "kraj main:\n";
}
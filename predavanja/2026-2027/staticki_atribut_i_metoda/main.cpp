#include <iostream>
#include "Racun.h"

using namespace std;

int main()
{
     std::cout << "Broj racuna: "
              << Racun::getBrojRacuna() << "\n";    // static metodi možemo pristupiti preko imena klase

    Racun r1("BA-001", "Ana", 1000);
    Racun r2("BA-002", "Marko", 500);

    std::cout << "Broj racuna nakon kreiranja r1 i r2: "
              << Racun::getBrojRacuna() << "\n";    

    Racun r3("BA-003", "Jelena", 2000);

    std::cout << "Broj racuna nakon kreiranja r3: "
              << r3.getBrojRacuna() << "\n";          // static metodi možemo pristupiti i preko pojedinačnog objekta

    return 0;
}
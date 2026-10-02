#include <iostream>
#include "Racun.h"
#include "Kamata.h"     // Kamata.h i sam ukljucuje Racun.h -> drugo ucitavanje fajla Racun.h

int main()
{
    Racun a("501-001", "Marko Markovic", 1000);
    Racun b("501-002", "Ana Anic");

    a.uplata(250);
    b.uplata(500);

    a.prikazi();
    b.prikazi();

    Kamata k;
    k.pripisi(a);

    std::cout << "Otvoreno racuna: "
              << Racun::getBrojRacuna() << "\n";
}
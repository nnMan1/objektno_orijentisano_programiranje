
#include <iostream>
#include "Racun.h"

class Banka {
    std::string ime;
    Racun* glavniRacun;          // objekat koji je klasa Banka sama napravila

public:
    Banka(std::string ime)
        : ime(ime),
          glavniRacun(new Racun("501-000", "Glavni racun", 0))
    {
    }

    ~Banka()
    {
        delete glavniRacun;      // ko je napravio glavniRacun, taj ga i brise. 
        //Bez linije iznad imali bismo curenje memorije (zauzeta memorija koja nikada nije oslobođena)
    }

    void prikazi() const { glavniRacun->prikazi(); }
};

int main()
{
    Banka b("Prva banka");
    b.prikazi();
    std::cout << "kraj main:\n";
}

// #include <iostream>
// #include "Racun.h"

// int main()
// {
//     std::cout << "a nastaje na steku:\n";
//     Racun a("501-001", "Marko Markovic", 1000);

//     std::cout << "p pokazuje na objekat na heapu:\n";
//     Racun* p = new Racun("501-002", "Ana Anic", 500);

//     p->uplata(250);
//     p->prikazi();

//     std::cout << "Ukupan broj racuna u sistemu (objekata klase Racun): " << Racun::getBrojRacuna() << "\n";

//     std::cout << "delete p:\n";
//     delete p;

//     std::cout << "Ukupan broj racuna u sistemu (objekata klase Racun): " << Racun::getBrojRacuna() << "\n";
//     std::cout << "kraj funkcije main:\n";
// }
#include "Izvod.h"
#include <iostream>

Izvod::Izvod(int broj) : iznosi(new double[broj]), broj(broj)
{
    std::cout << "  [konstruktor, niz na " << iznosi << "]\n";
    for (auto i = 0; i < broj; i++)
        iznosi[i] = 0;
}

Izvod::Izvod(const Izvod& drugi)
    : iznosi(new double[drugi.broj]), broj(drugi.broj)
{
    for (int i = 0; i < broj; i++)
        iznosi[i] = drugi.iznosi[i];

    std::cout << "  [konstruktor kopije, novi niz na " 
<< iznosi << "]\n";
}

Izvod::~Izvod()
{
    std::cout << "  [destruktor, oslobadja " << iznosi << "]\n";
    delete[] iznosi;
}
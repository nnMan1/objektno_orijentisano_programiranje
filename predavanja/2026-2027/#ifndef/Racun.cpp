#include "Racun.h"
#include <iostream>

int Racun::brojRacuna = 0;

Racun::Racun(std::string broj, std::string ime, double pocetno)
    : broj(broj), vlasnik(ime), stanje(pocetno > 0 ? pocetno : 0)
{
    brojRacuna++;
}

void Racun::uplata(double iznos)
{
    if (iznos > 0)
        stanje += iznos;
}

bool Racun::isplata(double iznos)
{
         if (iznos <= 0 || iznos > getStanje())
             return false;
         stanje -= iznos;
         return true;
}

void Racun::prikazi() const
{
      std::cout << vlasnik << ": " << stanje << "EUR " << broj <<"\n";
}


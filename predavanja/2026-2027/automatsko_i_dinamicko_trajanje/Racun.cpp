#include "Racun.h"
#include <iostream>

int Racun::brojRacuna = 0;

Racun::Racun(std::string broj, std::string ime, double pocetno)
    : broj(broj), vlasnik(ime), stanje(pocetno > 0 ? pocetno : 0)
{
    brojRacuna++;
    std::cout << "  [konstruktor " << broj << "]\n";
}

Racun::~Racun()
{
    brojRacuna--;
    std::cout << "  [destruktor " << broj << "]\n";
}

void Racun::uplata(double iznos)
{
    if (iznos > 0)
        stanje += iznos;
}

bool Racun::isplata(double iznos)
{
    if (iznos <= 0 || iznos > stanje)
        return false;
    stanje -= iznos;
    return true;
}

void Racun::prikazi() const
{
    std::cout << broj << "  " << vlasnik << ": " << stanje << " EUR\n";
}
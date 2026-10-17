#ifndef RACUN_H
#define RACUN_H
//#pragma once

#include <string>

class Racun {
private:
    const std::string broj;
    std::string vlasnik;
    double stanje;
    static int brojRacuna;

public:
    Racun(std::string broj, std::string ime, double pocetno = 0.0);

    void uplata(double iznos);
    bool isplata(double iznos);
    void prikazi() const;

    double getStanje() const;
    static int getBrojRacuna() { return brojRacuna; }
};


inline double Racun::getStanje() const { return stanje; }

#endif

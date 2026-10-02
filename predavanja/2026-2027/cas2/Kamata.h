#ifndef KAMATA_H
#define KAMATA_H

#include "Racun.h"

class Kamata {
private:
    double godisnjaStopa;          // u procentima

public:
    Kamata(double stopa = 2.5);

    double mjesecniObracun(const Racun& r) const;
    void pripisi(Racun& r) const;

    bool imaPravo(const Racun& r) const { return r.getStanje() >= 100.0; }
    double getStopa() const { return godisnjaStopa; }
};

#endif
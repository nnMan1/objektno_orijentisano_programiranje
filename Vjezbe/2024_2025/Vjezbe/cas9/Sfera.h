#ifndef SFERA_H
#define SFERA_H
#include "Tijelo.h"

class Sfera: public Tijelo {

    double r;

public:
    Sfera(double);

    virtual char vrsta() const;
    virtual double zapremina() const;
    virtual void pisi() const;
    virtual Tijelo* kopija() const;

};

#endif
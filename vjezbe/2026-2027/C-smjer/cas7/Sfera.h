#ifndef SFERA_H
#define SFERA_H
#include "Tijelo.h"

class Sfera: public Tijelo {
    double r;
public:
    Sfera(double);
    Sfera(const Sfera&);

    virtual char vrsta() const;
    virtual double zapremina() const;
    virtual Sfera* kopija();
    virtual void pisi();
};

#endif
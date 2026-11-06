#ifndef SFREA_H
#define SFERA_H
#include "Tijelo.h"

class Krug {

};

class Sfera: public Tijelo, public Krug {
    double r;
    public:
    Sfera(double);
    virtual double zapremina() const;
    virtual Sfera* kopija() const;
    void pisi() const;
};

#endif
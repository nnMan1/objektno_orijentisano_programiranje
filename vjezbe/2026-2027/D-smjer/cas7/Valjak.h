#ifndef VALJAK_H
#define VALJAK_H
#include "Tijelo.h"

class Valjak: public Tijelo {
    double r;
    double h;
    public:
    Valjak(double, double);
    virtual double zapremina() const;
    virtual Valjak* kopija() const;
    void pisi() const;
};

#endif
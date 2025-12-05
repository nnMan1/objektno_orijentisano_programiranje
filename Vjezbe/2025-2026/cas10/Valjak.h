#ifndef VALJAK_H
#define VALJAK_H
#include "Tijelo.h"

class Valjak: public Tijelo {
    double r;
    double h;
    static int valjak_num;

    public:
        Valjak(double, double);
        char vrsta() const;
        double zapremina() const;
        Tijelo* kopija()const;
    private:
        void pisi(ostream&) const;
};

#endif
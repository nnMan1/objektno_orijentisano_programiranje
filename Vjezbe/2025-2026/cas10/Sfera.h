#ifndef SFERA_H
#define SFERA_H
#include "Tijelo.h"

class Sfera: public Tijelo {
    double r;
    static int sfera_num;

    public:
        Sfera(double);
        char vrsta() const;
        double zapremina() const;
        Tijelo* kopija()const;
    private:
        void pisi(ostream&) const;
};

#endif
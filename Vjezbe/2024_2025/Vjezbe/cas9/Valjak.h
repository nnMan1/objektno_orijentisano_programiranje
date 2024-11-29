#ifndef VALJAK_H
#define VALJAK_H
#include "Tijelo.h"
#include <iostream>

using namespace std;

class Valjak: public Tijelo {

    double r, h;

public:
    Valjak(double, double);

    void set_r(double);
    double get_r() const { return r; };
    void set_h(double);
    double get_h() const { return h; };

    virtual char vrsta() const;
    virtual double zapremina() const;
    virtual Tijelo* kopija() const;
    virtual void pisi() const;

    //Valjak operator+(Valjak);
    friend Valjak operator+(Valjak, Valjak);
    friend ostream& operator<<(ostream&, Valjak);
};

#endif
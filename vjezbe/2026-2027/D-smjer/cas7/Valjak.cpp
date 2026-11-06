#include "Valjak.h"
#include <cmath>

Valjak::Valjak(double r, double h):Tijelo("V") {
    this->r = r;
    this->h = h;
};


double Valjak::zapremina() const {
    return r*r*M_PI*h;
}

Valjak* Valjak::kopija() const {
    return new Valjak(r, h);
}

void Valjak::pisi() const {
    cout << get_id() << "(" << r << ", " << h << ")";
}
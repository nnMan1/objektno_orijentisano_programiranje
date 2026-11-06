#include "Valjak.h"
#include <cmath>

Valjak::Valjak(double r, double h):Tijelo("V") {
    this->r = r;
    this->h = h;
}

char Valjak::vrsta() const {
    return 'S';
}
double Valjak::zapremina() const {
    return r*r*M_PI * h;
}

Valjak* Valjak::kopija() {
    return new Valjak(r, h);
}
void Valjak::pisi() {
    cout << get_id() << "(" << r << "," << h << ")" ;
}
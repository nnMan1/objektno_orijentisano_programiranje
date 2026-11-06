#include "Sfera.h"
#include <cmath>

Sfera::Sfera(double r):Tijelo("S") {
    this->r = r;
};


double Sfera::zapremina() const {
    return r*r*r*M_PI*4/3;
}

Sfera* Sfera::kopija() const {
    return new Sfera(r);
}

void Sfera::pisi() const {
    cout << get_id() << "(" << r << ")";
}
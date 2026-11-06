#include "Sfera.h"
#include <cmath>

Sfera::Sfera(double r):Tijelo("S") {
    this->r = r;
}

// Sfera::Sfera(const Sfera& s):Tijelo("S") {
//     this->r = s.r;
// }

Sfera::Sfera(const Sfera& s):Sfera(s.r) {};

char Sfera::vrsta() const {
    return 'S';
}
double Sfera::zapremina() const {
    return r*r*r*M_PI*4/3;
}

Sfera* Sfera::kopija() {
    return new Sfera(r);
}
void Sfera::pisi() {
    cout << get_id() << "(" << r << ")" ;
}
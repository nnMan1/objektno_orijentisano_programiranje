#include "Sfera.h"
#include "math.h"
#include <iostream>

using namespace std;

Sfera::Sfera(double r): Tijelo('S') {
    if(r <= 0) {
        cout << "Poluprecnik mora biti veci od 0";
        exit(1);
    }

    this->r = r;
}

char Sfera::vrsta() const {
    return 'S';
}

double Sfera::zapremina() const {
    return r*r*r*M_PI * 4 / 3;
}

void Sfera::pisi() const {
    cout << id << "(" << r << ")";
}

Tijelo* Sfera::kopija() const {
    return new Sfera(r);
}
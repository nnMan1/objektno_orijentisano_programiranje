#include "Valjak.h"
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

Valjak::Valjak(double r, double h): Tijelo("V"+to_string(Valjak::valjak_num++)) {
    if(r < 0 || h < 0) {
        cout << "Error";
        exit(1);
    }

    this->r = r;
    this->h = h;
}

char Valjak::vrsta() const {
    return 'V';
}

double Valjak::zapremina() const {
    return r * r * M_PI * h;
}

Tijelo* Valjak::kopija() const {
    return new Valjak(this->r, this->h);
}

void Valjak::pisi(ostream& os) const {
    os << this->id << "(" <<r << "," << h << ")";
}

int Valjak::valjak_num = 1;
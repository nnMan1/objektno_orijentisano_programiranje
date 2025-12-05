#include "Sfera.h"
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

Sfera::Sfera(double r): Tijelo("S"+to_string(Sfera::sfera_num++)) {
    if(r < 0) {
        cout << "Error";
        exit(1);
    }

    this->r = r;
}

char Sfera::vrsta() const {
    return 'S';
}

double Sfera::zapremina() const {
    return 4 / 3.0 * r * r *r * M_PI;
}

Tijelo* Sfera::kopija() const {
    return new Sfera(this->r);
}

void Sfera::pisi(ostream& os) const {
    os << this->id << "(" <<r << ")";
}

int Sfera::sfera_num = 1;
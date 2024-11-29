#include "Valjak.h"
#include <iostream>
#include <math.h>

using namespace std;

Valjak::Valjak(double r, double h): Tijelo('V') {
    set_r(r);
    set_h(h);
}

void Valjak::set_r(double r) {
    if(r < 0) {
        cout << "Poluprecnik valjka mora biti veci od 0";
        exit(1);
    }

    this->r = r;
}

void Valjak::set_h(double h) {
    if(h < 0) {
        cout << "Visina valjka mora biti veci od 0";
        exit(1);
    }
    
    this->h = h;
}

char Valjak::vrsta() const {
    return 'V';
}

double Valjak::zapremina() const {
    return r * r * M_PI * h;
}

Tijelo* Valjak::kopija() const {
    return new Valjak(r, h);
}

void Valjak::pisi() const {
    cout << this->id << '(' << this->r << ", " << this->h << ')';
}

// Valjak Valjak::operator+(const Valjak& v) {
//     Valjak ret(r + v.r, h + v.h);
//     return ret;
// }

ostream& operator<<(ostream& os, Valjak v) {
    os << v.id << '(' << v.r << ',' << v.h << ')';

    return os;
}

Valjak operator+(Valjak v1, Valjak v2) {
    Valjak v3 = Valjak(v1.get_r() + v2.get_r(), v1.get_h() + v2.get_h());
    return v3;
}

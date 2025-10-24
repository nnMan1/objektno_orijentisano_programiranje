#include "Datum.h"
#include <iostream>

Datum::Datum() {
    this->d = 1;
    this->m = 1;
    this->g = 1 ;
}


Datum::Datum(int d, int m, int g): d(d), m(m) {
    this->g = g;
}


int Datum::get_d() const {
    return this->d;
}

int Datum::get_m() const {
    return this->m;
}

int Datum::get_g() const {
    return this->g;
}

bool Datum::prestupna() const {
    return g % 400 == 0 || g % 100 != 0 && g % 4 == 0;
}
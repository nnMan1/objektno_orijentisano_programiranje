#include "Datum.h"
#include <iostream>

using namespace std;

Datum::Datum() {
    this->d = 1;
    this->m = 1;
    this->g = 1 ;

    br_instanci ++;
}

Datum::Datum(int d, int m, int g): d(d), m(m) {
    this->g = g;
    br_instanci++;
}

Datum::~Datum() {
    br_instanci --;
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

bool Datum::validan(int d, int m, int g) {
    if(m < 1 || m > 12 ) return false;
    if(d < 1 || d > br_dana_u_mjesecu[Datum(d, m, g).prestupna()][m]) return false;
    
    return true;
}

Datum& Datum::operator++() {
    this->d++;

    if(this->d > br_dana_u_mjesecu[this->prestupna()][m]) {
        m++;
        d = 1;
    }

    if(m > 12) {
        g++;
        m = 1;
    }

    return *this;
}

Datum Datum::operator++(int) {
    Datum ret = *this;
    ++(*this);
    return ret;
}


void Datum::print() {
    cout << d << "." << m << "." << g;
}

int Datum::br_instanci = 0;
int Datum::br_dana_u_mjesecu[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                       {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
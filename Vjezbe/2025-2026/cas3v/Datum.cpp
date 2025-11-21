#include "Datum.h"
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

Datum::Datum() {
    this->d = 1;
    this->m = 1;
    this->g = 1 ;

    br_instanci ++;
}

Datum::Datum(int d) {
    this->d = 1;
    this->m = 1;
    this->g = 0;

    for(int i=0;i<d;i++)
        this->operator++();
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

int Datum::broj_dana_od_pocetka_godine() const {
    int br = this->d;

    for(int i=1; i<this->m; i++) {
        br += br_dana_u_mjesecu[prestupna()][i];
    }

    return br;
}

int Datum::br_dana_od_110() const {
    int br = broj_dana_od_pocetka_godine();

    br += g * 365;
    br += g / 4 - g / 100 + g / 400;

    return br;
}

// int Datum::operator-(Datum& d) const {
//     int br1 = this->br_dana_od_110();
//     int br2 = d.br_dana_od_110();

//     return br1 - br2;
// }

Datum Datum::operator-(int d) {
    Datum cpy = *this;

    int br1 = this->br_dana_od_110();
    br1 -= d;

    return Datum(br1);
}

int operator-(const Datum& d1, const Datum& d2) {
    int br1 = d1.br_dana_od_110();
    int br2 = d2.br_dana_od_110();

    return br1 - br2;
}

ostream& operator<<(ostream& os, const Datum& d) {
    os << d.d << "." << d.m << "." << d.g;
    return os;
}

istream& operator>>(istream& is, Datum& d) {
    // char c;
    // //25.1.2023.
    // is >> d.d >> c >> d.m >> c >> d.g >> c;
    char datum[50];
    is >> datum;
    char *rem;

    d.d = strtol(datum, &rem, 10);
    d.m = strtol(rem+1, &rem, 10);
    d.g = strtol(rem+1, &rem, 10);

    return is;
}


void Datum::print() {
    cout << d << "." << m << "." << g;
}

int Datum::br_instanci = 0;
int Datum::br_dana_u_mjesecu[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                       {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
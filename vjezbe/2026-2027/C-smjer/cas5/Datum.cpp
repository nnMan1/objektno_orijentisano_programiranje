#include "Datum.h"
#include "iostream"

using namespace std;

const int Datum::dan_mjesec[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, 
                                      {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};


Datum::Datum() {
    this->d = 1;
    this->m = 1;
    this->g = 1;
}

Datum::Datum(int d, int m, int g): d(d), m(m), g(g) {
    // this->d = d;
    // this->m = m;
    // this->g = g;
    if(!validan()) {
        cerr << "Datum nije validan" << endl;
        exit(1);
    }
}

bool Datum::prestupna() const { 
    if(g % 400 == 0) return true;
    if(g % 100 == 0) return false;
    if(g % 4 == 0) return true;
    return false;
}

int Datum::br_dana_od_pocetka_godine() const {
    int br_dana = d; //br_dana od ovog mjeseca
    for(int i=0;i<m;i++) 
        br_dana += dan_mjesec[prestupna()][i];

    return br_dana;
}

bool Datum::validan() const {
    if(m < 1 || d < 1) return false; 
    if(m > 12 || d > dan_mjesec[prestupna()][m]) return false;
    return true;
}

void Datum::pisi() const {
    cout << d << "." << m << "." << g << ".";
}
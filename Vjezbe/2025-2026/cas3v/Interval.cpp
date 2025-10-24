#include "Interval.h"

Interval::Interval(Datum p, Datum k): pocetak(p), kraj(k) {
}

Interval::Interval(int d1, int m1, int g1,
                 int d2, int m2, int g2): pocetak(d1, m1, g1), kraj(d2, m2, g2) {

                 }
            
Interval::Interval(Datum p, int t) { //moze ovo ako Datum ima konstuktor bez arg
    this-> pocetak = p;
    //kraj za domaci izracunati
}
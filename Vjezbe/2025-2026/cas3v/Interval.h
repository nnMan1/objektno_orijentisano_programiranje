#ifndef INTERVAL_H
#define INTERVAL_H
#include "Datum.h"

class Interval {
    Datum pocetak;
    Datum kraj;
    public:
        Interval(Datum p, Datum k);
        Interval(int d1, int m1, int g1,
                 int d2, int m2, int g2);
        Interval(Datum p, int d);
    protected:
    private:
};

#endif


#ifndef DATUM_VRIJEME_H
#define DATUM_VRIJEME
#include <iostream>
#include "Datum.h"

class DatumVrijeme: public Datum {

    public:
    DatumVrijeme();
    virtual ~DatumVrijeme();
    DatumVrijeme(int d, int m, int g, int hh, int mm);

    virtual void print() const;
    friend ostream& operator<<(ostream&, const DatumVrijeme&);

    protected:
    private:
        int hh;
        int mm;

};

#endif
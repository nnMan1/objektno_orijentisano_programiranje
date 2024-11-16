#ifndef DATUMVRIJEME_H
#define DATUMVRIJEME_H

#include "Datum.h"

class DatumVrijeme: public Datum {
    private:
        int hh, mm;
    public:
    DatumVrijeme();
    DatumVrijeme(const Datum& d): Datum(d) {} //Zvod ovog konstruktora mozemo da pisemo DatumVrijeme v1 = d1;
    DatumVrijeme(int d, int m, int g, int hh, int mm);

    void pisi() const;
};

#endif
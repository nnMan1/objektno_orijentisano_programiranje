#ifndef DATUMVRIJEME_H
#define DATUMVRIJEME_H
#include "Datum.h"

class DatumVrijeme: public Datum {
    int hh, mm;
    public:
    DatumVrijeme();
    DatumVrijeme(int d, int m, int g, int hh, int mm);
    ~DatumVrijeme() {
        cout << "Unistava se objekat Datum vrijeme"; pisi(); cout << endl;
    }

    void set_hh(int hh);
    int get_hh() const;
    void set_mm(int mm);
    int get_mm() const;

    void pisi() const;
};

#endif
#include "DatumVrijeme.h"

DatumVrijeme::DatumVrijeme() {
    this->hh=0;
    this->mm=0;
}

DatumVrijeme::DatumVrijeme(int d, int m, int g, int hh, int mm):Datum(d, m, g) {
    set_hh(hh);
    set_mm(mm);
}

void DatumVrijeme::set_hh(int hh) {
    if(hh < 0 || hh > 23) {
        cout << "hh mora biti izmedju 00 i 23" << endl;
        exit(1);
    }

    this->hh = hh;
}

int DatumVrijeme::get_hh() const {
    return hh;
}

void DatumVrijeme::set_mm(int mm) {
    if(mm < 0 || mm > 23) {
        cout << "hh mora biti izmedju 00 i 23" << endl;
        exit(1);
    }

    this->mm = mm;
}

int DatumVrijeme::get_mm() const {
    return mm;
}

void DatumVrijeme::pisi() const {
    Datum::pisi();
    cout << " " << hh << ":" << mm;
    // cout << get_d() << "." << get_m() << "." << get_g() << " " << hh << ":" << mm;
}
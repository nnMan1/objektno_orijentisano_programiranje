#include "Ocjena.h"

Ocjena::Ocjena(): vrijednost('F'), idPredmeta(0)
{}

Ocjena::Ocjena(int idPredmeta, char vrijednost)
{
    set_vrijednost(vrijednost);
    set_id_predmeta(idPredmeta);
}

char Ocjena::get_vrijednost() const {
    return this->vrijednost;
}
void Ocjena::set_vrijednost(char vrijednost) {
    OcjenaException *e = new OcjenaException("Ocjena mora biti izmedju A i F");

    if(vrijednost < 'A' || vrijednost > 'F')
        throw e;

    this->vrijednost = vrijednost;
}

int Ocjena::get_id_predmeta() const {
    return this->idPredmeta;
}
void Ocjena::set_id_predmeta(int idPredmeta) {

    if(idPredmeta < 0)
        throw 5;

    this->idPredmeta = idPredmeta;
}

bool Ocjena::operator<(const Ocjena& o) const {
    return this->vrijednost > o.vrijednost;
}

ostream& operator<<(ostream& os, Ocjena o) {
    os << '(' << o.idPredmeta << ", " << o.vrijednost << ')';
    return os;
}

Ocjena& Ocjena::operator++() {
    if(vrijednost == 'A')
        throw OcjenaException("Maksimalna ocjena je A");

    vrijednost--;
    return *this;
}

Ocjena Ocjena::operator++(int) {
    Ocjena ret = *this;

    if(vrijednost == 'A')
        throw OcjenaException("Maksimalna ocjena je A");

    vrijednost--;
    return ret;
}



#include "Tijelo.h"
#include <string.h>
#include <string>

Tijelo::Tijelo(string id) {
    this->id = id;
}

Tijelo::~Tijelo() {
    // delete[] this->id;
}

// Implementiramo metode koje nisu apstraktne
ostream& operator<<(ostream& os, const Tijelo& t) {
    t.pisi(os);
    return os;
}
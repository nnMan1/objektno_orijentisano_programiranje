#include "Tijelo.h"

int Tijelo::counter = 0;

Tijelo::Tijelo(string tip){ 
    this->id = tip + to_string(counter++);
}

Tijelo::Tijelo(const Tijelo& t) {
    this->id = t.id[0] + to_string(counter++);
}

void Tijelo::pisi() const {
    cout << "Tijelo(" << id << ")";
}

string Tijelo::get_id() const {
    return id;
}   
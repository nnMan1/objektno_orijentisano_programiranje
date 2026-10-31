#include "Praznik.h"

// Praznik::Praznik(string naziv, Datum d):naziv(naziv), d(d) {
Praznik::Praznik(string naziv, Datum d):naziv(naziv), d(d.get_d(), d.get_m(), d.get_g()) {
    // this->naziv = naziv; //ne moze jer je naziv konst promjenj -> mora preko liste inicijalizatora
    // this->d = d;         //atribut je objekat klase koja nema konstruktor bez arg -> mora preko liste inicijalizatora
}

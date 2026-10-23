#pragma once
#include "Datum.h"
#include "string"

using namespace std;

class Praznik {
    const string naziv;
    Datum d;
    public:
    Praznik(string naziv, Datum d);
};
#include "Tijelo.h"
#include <string>

using namespace std;

int Tijelo::counter = 0;

Tijelo::Tijelo(string tip) {
    id = tip + to_string(counter++);
}
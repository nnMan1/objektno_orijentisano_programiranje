#include "Student.h"
#include <string.h>

Student::Student(const char *ime, int br_index, int god_upisa) {
    strcpy(this->ime, ime);
    this->br_index = br_index;
    this->god_upisa = god_upisa;
}


bool Student::operator<(const Student& o) const {
    if(this->god_upisa != o.god_upisa)
        return this->god_upisa > o.god_upisa;
    else
        return this->br_index < o.br_index;
}
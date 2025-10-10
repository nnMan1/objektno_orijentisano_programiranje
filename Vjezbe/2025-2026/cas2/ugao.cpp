#include "ugao.h"
#include <math.h>
#include <iostream>

using namespace std;

void Ugao::set_rad(double vrijednost) {
    int temp = floor(vrijednost / M_PI / 2);
    vrijednost -= temp * M_PI * 2;
    this->vrijednost = vrijednost;
}

double Ugao::get_rad() const {
    return this->vrijednost;
}

void Ugao::set_step(double vrijednost) {
    this->set_rad(vrijednost * M_PI / 180);
}

double Ugao::get_step() const {
    return this->vrijednost * 180 / M_PI;
}

void Ugao::stampaj() const {
    cout << this->get_step() << endl;
}

Ugao Ugao::plus(Ugao u2) const {
    Ugao ret;
    ret.set_rad(this->vrijednost + u2.vrijednost);
    return ret;
}


Ugao Ugao::minus(Ugao u2) const {
    Ugao ret;
    ret.set_rad(this->vrijednost - u2.vrijednost);
    return ret;
}
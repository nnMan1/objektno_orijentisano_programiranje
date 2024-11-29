#ifndef REDTIJELA_H
#define REDTIJELA_H
#include "Tijelo.h"

class RedTijela {
    Tijelo ** data;
    int cap;
    int pop;

public:
    RedTijela(int cap=5);
};

#endif
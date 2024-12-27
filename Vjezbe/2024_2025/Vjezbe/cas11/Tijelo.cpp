#include "Tijelo.h"
#include <stdio.h>

Tijelo::Tijelo(char p) {
    sprintf(id, "%c%d", p, ++t_cnt);
}

int Tijelo::t_cnt = 0;
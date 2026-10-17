#include <iostream>
#include "Racun.h"

Racun::Racun(std::string ime, double pocetno) 
    {
        vlasnik = ime;
        uplaceno = (pocetno > 0) ? pocetno : 0;
        isplaceno = 0;
    }

void Racun::uplata(double iznos){uplaceno+=iznos;}
    
bool Racun::isplata(double iznos) 
    {
        if (iznos <= 0 || iznos > getStanje())
            return false;
        isplaceno += iznos;
        return true;
    }
    



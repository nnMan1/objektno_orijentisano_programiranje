
#include <iostream>

class Racun{
private:
    std::string vlasnik;
    double uplaceno;
    double isplaceno;
public:
    Racun(std::string ime, double pocetno);
    void uplata(double iznos);
    bool isplata(double iznos); 
    double getStanje() const   
    {
        return uplaceno - isplaceno;
    }

 };

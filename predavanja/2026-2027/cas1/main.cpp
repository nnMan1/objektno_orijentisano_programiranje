#include <iostream>


// Prva verzija klase
// class Racun {
// private:
//     std::string vlasnik;
//     double stanje;
// public:
//     Racun(std::string ime, double pocetno)
//     {
//         vlasnik= ime;
//         stanje = (pocetno>0)?pocetno:0;
//     }
//     void uplata(double iznos) {stanje += iznos; }
//     bool isplata(double iznos)
//     {
//         if (iznos <= 0 || iznos > getStanje())
//             return false;
//         stanje -= iznos;
//         return true;
//     }
//     double getStanje() const {
//         return stanje;
//     }
// };

// Druga verzija klase (main se ne mijenja)
class Racun{
private:
    std::string vlasnik;
    double uplaceno;
    double isplaceno;
public:
    Racun(std::string ime, double pocetno) 
    {
        vlasnik = ime;
        uplaceno = (pocetno > 0) ? pocetno : 0;
        isplaceno = 0;
    }
    void uplata(double iznos){uplaceno+=iznos;}
    bool isplata(double iznos) 
    {
        if (iznos <= 0 || iznos > getStanje())
            return false;
        isplaceno += iznos;
        return true;
    }
    double getStanje() const 
    {
        return uplaceno - isplaceno;
    }



// struct Racun 
// {
//     std::string vlasnik;
//     double stanje;
// };

// void uplata( Racun& r, double iznos){ r.stanje += iznos; }
// void isplata(Racun& r, double iznos) { r.stanje -= iznos; }

// void prikazi(const Racun& r) 
// {
//     std::cout << r.vlasnik << ": " << r.stanje << " EUR\n";
// }

int main ()
{

    Racun a("Marko Markovic", 1000); 
    Racun b("Ana Anic", 500);

    a.uplata(200);
    a.isplata(50);
    std::cout << a.getStanje() << std::endl;


    // Racun a{"Marko Markovic", 1000.0}; // struct
    // Racun b{"Janko Jankovic", 500.0}; //struct

    // uplata (a,150);
    // isplata (b,100);

    // prikazi(a);
    // prikazi(b);

    return 0;
}



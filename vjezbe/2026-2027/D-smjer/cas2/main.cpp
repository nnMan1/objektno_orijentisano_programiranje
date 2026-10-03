//Ugao (ugao u radijanima) 
    // ako ugao nije u opsegu 0-2pi 
    // cuvati odgovarajuci ugao u opsegu 0-2pi
    // konstruktor sa jednim argumentom
    // set step - uzima ugao u stepenima
    // set rad
    // get step
    // get rad
    // stampaj
    // plus  
    // minus

//Stek cijelih brojeva
    //prazan konstruktor, inicijalizuje stek kapaciteta 10 elemenata +
    //destruktor +
    //dodavanje u stek, ako je stek pun prosiriti mu kapacitet +
    //da li je stek prazan +
    //uzimanje sa vrha steka, ako je stack prazan stampa odgovarajucu poruku i vraca 0
    //uklanjanje sa vrha steka, i vraca vrijednost uklnonjenog elementa +

#include <iostream>
// #include <math.h>
#include <cmath>

using namespace std;

class Ugao {
    private:
    double vrijednost;

    public:
    Ugao(double v) {
        set_rad(v);
    }

    void set_rad(double v) {
        int br_krugova = v / (M_PI * 2);
        
        v = v - br_krugova * (M_PI * 2);
        if(v < 0)
            v += M_PI * 2;

        vrijednost = v;
    }

    double get_rad() const {
        return vrijednost;
    }

    void set_step(double v) {
        vrijednost = (M_PI * 2) / 360 * v;
    }   

     double get_step() const {
        return 360 / (M_PI * 2) * vrijednost;
    }

    void stampa() const {
        cout << get_step() << "step";
    }

    Ugao plus(Ugao u) {
        return Ugao(vrijednost + u.vrijednost);
    }

    Ugao minus(Ugao u) {
        return Ugao(vrijednost - u.vrijednost);
    }
};

int main() {

    Ugao u1(250);
    u1.set_rad(500);
    cout << "u1 = " <<  u1.get_rad()  << "rad = " << 
                        u1.get_step() << "step" << endl;

    u1.set_step(120);

    cout << "u1 = " <<  u1.get_rad()  << "rad = " << 
                        u1.get_step() << "step" << endl;

    cout << "u1 = "; u1.stampa(); cout << endl; 

    Ugao u2(M_PI_2 * 3);
    Ugao u3 = u1.plus(u2);
    cout << u1.get_step() << "step + " << u2.get_step() << "step =  " << u3.get_step() << "step" << endl;

    u3 = u1.minus(u2);
    cout << u1.get_step() << "step - " << u2.get_step() << "step =  " << u3.get_step() << "step" << endl;


    return 0;
}
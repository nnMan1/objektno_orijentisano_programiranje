//Ugao (ugao u radijanima) 
    // ako ugao nije u opsegu 0-2pi 
    // cuvati odgovarajuci ugao u opsegu 0-2pi
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
#include <math.h>

using namespace std;

class Ugao {
private:
    double vrijednost; 
public:
    Ugao(double v) {
        set_rad(v);
    }

    double get_rad() {
        return vrijednost; 
    }

    void set_rad(double v) {
        //(int)(v / M_PI / 2) = broj cijelih krugova
        // ((int)(v / M_PI / 2))*(M_PI * 2) = broj radijana u cijelim krugovima
        v = v - ((int)(v / M_PI / 2))*(M_PI * 2);

        // v = fmod(v, (M_PI * 2));

        if(v < 0)
            v += (2 * M_PI);
        vrijednost = v;
    }

    double get_step() const {
        //  360 : 2PI = x : vrijednost
        //  360 / 2PI * vrijednost = x
        return 360 * ( vrijednost / (M_PI * 2));
    }

    void set_step(double v) {
        // 360 : 2PI = x : vrijednost
        // 2PI * x / 360 = vrijednost
        set_rad(M_PI * 2 * v / 360);
    }

    void stampaj() const {
        cout << vrijednost << endl;
    }

    Ugao plus(Ugao u) const {
        return Ugao(vrijednost + u.vrijednost);
    }

    Ugao minus(Ugao u) const {
        return Ugao(vrijednost - u.vrijednost);
    }
};

int main() {
    Ugao u1(9.47);

    cout << "u1.get_rad = "  << u1.get_rad() << endl; 
    cout << "u1.get_step = "  << u1.get_step() << endl; 

    cout << endl;

    u1.set_rad(7);
    cout << "u1.get_rad = "  << u1.get_rad() << endl; 
    cout << "u1.get_step = "  << u1.get_step() << endl; 

    u1.set_step(60 + 360 * 2);
    cout << "u1.get_rad = "  << u1.get_rad() << endl; 
    cout << "u1.get_step = "  << u1.get_step() << endl; 

    Ugao u2(45);
    u2.set_step(45);

    Ugao u3 = u2.plus(u1);
    cout << u1.get_step() << " + " << 
        u2.get_step() << " = " << u3.get_step() << endl; 


    u3 = u2.minus(u1);
    cout << u1.get_step() << " + " << 
        u2.get_step() << " = " << u3.get_step() << endl; 
    
    Ugao u4(-29);    
    cout << "u4.get_step = "  << u4.get_step() << endl; 

    return 0;
}
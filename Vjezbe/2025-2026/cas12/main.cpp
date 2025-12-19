//implementirati tempate funkciju template<class T> add. 
//funcija sabira predate argumente

//demonstrirati specijalizaciju i preklapanje funkcije za slucaj stringova
//potrebno je izvesiti konkatenaciju stringova sa razmakom izmedju.
 
//napraviti eksplicitni zahtjev za generisanje funkcije kada je predati argument float.

////////////////////////////////////////////////////////////////////////////////////

//Napisati template klasu Matrica.
//Sablon klase uzima tri argumenta, class T, int N i int M.

//implementirati prazan konstruktor koji elemente matrice postavlja na 0
//implementirati konstruktor kopije

//impleentirati operator * koji mnozi dvije matrice. Dvije matrice se mogu 
//pomnoziti ako je broj kolona prve matrice jednak broju vrsta druge matrice.

//implementirati operator() koji uzima dva cjelobrojna argumenta koji
//predstavljaju indeks vrste i indekolone. Vratiti referencu na vrijednost koja se nalazi
//u presjeku vrste i kolone. U slucaju greske baciti izuzetak int, std::out_of_range,pokazivac ...
//obraditi izuzetak

/////////////////////////////////////////////////////////////////////////////////

//izvrsiti specijalizaciju klase za slucaj N=1, M=3, dodati vektorski proizvod matrica.

#include <iostream>
#include <string.h>
#include "matrica.h"

using namespace std;

template<class T> 
T add(T a, T b) {
    return a + b;
}

template<>
char* add(char* a, char* b) {
    char *rez = new char[strlen(a) + 1 + strlen(b)];

    strcpy(rez, a);
    strcat(rez, " ");
    strcat(rez, b);

    return rez;
}

char* add(char* a, char* b) {
    char *rez = new char[strlen(a) + 1 + strlen(b)];

    strcpy(rez, a);
    strcat(rez, "$");
    strcat(rez, b);

    return rez;
}

template float add<float>(float a, float b); 
//eksplicitni zatthev za kreiranje funkcije na osnovu templatea

int main(){
    int a = 5, b = 7;

    cout << add<float>(a, b) << endl;

    char ime[100] = "Marko";
    char prezime[100] = "Markovic";

    cout << add(ime, prezime) << endl;

    Matrica<int, 2, 3> m1;
    Matrica<int, 3, 4> m2;
    Matrica<int, 2, 4> m3 = m1 * m2;

    try {
        cout << m1(1, 1) << endl;
        cout << m1(1, 2) << endl;
        cout << m1(1, -1) << endl;
    } catch (int x) {
        cout << "Doslo je do greske br " << x << endl;
        exit(1);
    } catch(MatricaIndexExcaption* e) {
        cout << e->get_poruka() << endl;
        cout << "Obrada izizetka za izvedenu klasu" << endl;
        delete e;
    } catch(MatricaIndexExcaption e) {
        cout << e.get_poruka() << endl;
        cout << "Obrada izizetka za izvedenu klasu" << endl;
    } catch(MatricaBaseExcaption e) {
        cout << e.get_poruka() << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
    } catch(...) {
        cout << "Ostali izuzeci" << endl;
    }

    cout << "Nastavak programa";

    return 0;
}
/**
* 1. Napisati klasu datum. (d, m,g)
* - Konstruktor bez argumenata, postavlja datum na 1.1.1. +
* - Konstruktor sa 3 argumenta 
* - bool prestupna() const; //provjerava da li je godina prestupna +
* - static bool validan(int d, int g, int m); //provjerava da li d, m, g predstavlja ispravan datum +
* - Getere +
* - int get_dan_u_nedelji() const; // 1 = ponedljeljak, 7 = nedelja +
* - void pisi() const; +
* - Datum sljedeci() const; +
* - Datum prethodni() const; +
* - int broj_dana_od_pocetka_godine() const; +
* - int razlika(const Datum&) const; +
*
* 2.Napisati klasu za ulancanu listu datuma
* -- potrebno je napraviti pomocnu klasu za cvor liste (Node). Cvor liste sadrzi datum i pokazivac na sljedeci cvor liste
* -- ulancana lista cuva pokazivac na pocetak liste
* - Konstruktor bez argumenata koji kreira praznu listu +
* - Destruktor +
* - Konstruktor kopije +
* - int duzina() const; +
* - ListaDatuma& dodaj_na_pocetak(Datum); +
* - ListaDatuma& dodaj_na_kraj(Datum); +
* - void ukloni(const Datum &d); //uklanja prvo pojavljivanje +
* - const Datum* najkasniji_datum(); +
* - void pisi() const; +
**/

#include <iostream>
#include "Datum.h"
#include "Interval.h"

using namespace std;

int main() {

    Datum d1(5, 3, 2024);
    cout << d1.get_d() << "." << d1.get_m() << "." << d1.get_g() << endl;
    
    Datum * d2_ptr = new Datum(6, 3, 2025); //datum koji se nalazi na heap

    // Datum d3;

    Interval i1(d1, *d2_ptr);
    Interval i2(25, 9, 2025, 31, 12, 2025);

    cout << "d1 " << (d1.prestupna() ? "je" : "nije") << " prestupna";

    delete d2_ptr;
    
    return 0;
}

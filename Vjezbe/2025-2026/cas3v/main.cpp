/**
* 1. Napisati klasu datum. (d, m,g)
* - Konstruktor bez argumenata, postavlja datum na 1.1.1. +
* - Konstruktor sa 3 argumenta 
* - bool prestupna() const; //provjerava da li je godina prestupna +
* - static bool validan(int d, int g, int m); //provjerava da li d, m, g predstavlja ispravan datum +
* - Getere +
* - int get_dan_u_nedelji() const; // 1 = ponedljeljak, 7 = nedelja +
* - void pisi() const; +
* - Datum operator++() const; //uvecava datum za 1 dan (prefiksni i postfiksni)
* - Datum operator--() const; //umanjuje datum za 1 dan (prefiksni i postfiksni)
* - Datum operator+(int d);
* - int opertaor-(Datum d); +
* - Datum operator-(int d); + 
* - int broj_dana_od_pocetka_godine() const; +
*
* 1.5. Napisati klasu DatumVrijeme koja je 
*   javno izvedena iz klase Datum i dodatno sadrzi hh i mm
*   -Konstrukor bez argumenata poziva konstruktor osnovne klase bez argumenata i postavlja vrijeme na 00:00
*   -Kosntruktor sa 5 argumenata
*   -Predefinisati metodu pisi
*
* 2.* 2.Napisati klasu za ulancanu listu datuma
* -- potrebno je napraviti pomocnu klasu za cvor liste (Node). Cvor liste sadrzi datum i pokazivac na sljedeci cvor liste
* -- ulancana lista cuva pokazivac na pocetak liste
* - Konstruktor bez argumenata koji kreira praznu listu +
* - Destruktor +
* - Konstruktor kopije +
* - int duzina() const; +
* - ListaDatuma& dodaj_na_pocetak(Datum); +
* - ListaDatuma& operator+=(Datum); +
* - void ukloni(const Datum &d); //uklanja prvo pojavljivanje +
* - const Datum* najkasniji_datum(); +
* - void pisi() const; +
**/

#include <iostream>
#include "Datum.h"
#include "DatumVrijeme.h"
#include "Interval.h"
#include "ListaDatuma.h"

using namespace std;

int main() {

    DatumVrijeme dv1(28, 11, 2025, 10, 36);
    cout << "dv1.print() = ";  dv1.print(); cout << endl; 
    
    cout << "cout << dv1 << endl = "; cout << dv1 << endl;

    Datum *dv2_ptr = new DatumVrijeme(28, 11, 2025, 11, 03);
    cout << "dv2_ptr->print() = "; dv2_ptr->print(); cout << endl;

    delete dv2_ptr;

    return 0;

    // Datum d0;
    // cin>>d0;
    // cout << "d0 = " << d0 << endl;

    Datum d1(31, 12, 2024);
    cout << d1.get_d() << "." << d1.get_m() << "." << d1.get_g() << endl;
    
    Datum * d2_ptr = new Datum(32, 3, 2025); //datum koji se nalazi na heap

    // Datum d3;

    Interval i1(d1, *d2_ptr);
    Interval i2(25, 9, 2025, 31, 12, 2025);

    Datum d3 = d1;

    cout << "d1 " << (d1.prestupna() ? "je" : "nije") << " prestupna" << endl;
    cout << "Datum::validan(31, 6, 2007) = " << Datum::validan(31, 6, 2007) << endl;
    cout << "d1.validan(3, 4, 2025) = " << d1.validan(3, 4, 2025) << endl;

    // delete d2_ptr;
    cout << "$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "d1 = " << d1 << endl;
    cout << "d1 = "; d1.print(); cout << endl;

    Datum d4 = ++ ++d1;
    // Datum d4 = d1++ ++;
    

    cout << "d1 = " << d1 << " Br. dana od pocetka = " << d1.broj_dana_od_pocetka_godine() << endl;
    cout << "d3 = " << d3 << " Br. dana od pocetka = " << d3.broj_dana_od_pocetka_godine() << endl;

    Datum d5(5, 4, 2025);

    cout << "d5 - 5 = " << (d5-5) << endl; 

    // cout << "d5 - d4 = " << d5 - d4 << endl; 
    // cout << "d5 - d4 = " << d5.operator-(d4) << endl; 

    // cout << d5 - Datum(1, 1, 1) << endl;
    // cout << d5.operator-(739345) << endl;

    // cout << 739345 - d5 << endl;

    ListaDatuma l1;
    l1.dodaj_na_pocetak(d1);
    l1.dodaj_na_pocetak(d4);
    l1.dodaj_na_pocetak(d3);

    cout << "l1 = "; l1.print(); cout << endl;

    int x = 5;
    int y = 6;

    ListaDatuma l2;
    l2 = l1;
    l2 = l2;
    l2.dodaj_na_kraj(d1);

    cout << "l1 = ";  l1.print(); cout << endl;
    cout << "l2 = ";  l2.print(); cout << endl;



    delete d2_ptr;
    
    return 0;
}


#include <iostream>
#include "Datum.h"
#include "DatumVrijeme.h"
#include "ListaDatuma.h"

using namespace std;

/**
* 1. Napisati klasu datum. (d, m,g)
* - Konstruktor bez argumenata, postavlja datum na 1.1.1. 
* - Konstruktor sa 3 argumenta 
* - bool prestupna() const; //provjerava da li je godina prestupna 
* - static bool validan(int d, int g, int m); //provjerava da li d, m, g predstavlja ispravan datum +
* - Getere 
* - int get_dan_u_nedelji() const; // 1 = ponedljeljak, 7 = nedelja 
* - void pisi() const; 
* - Datum sljedeci() const;
* - Datum prethodni() const; 
* - int broj_dana_od_pocetka_godine() const; 
* - int razlika(const Datum&) const; 
*
* 1.5. Napisati klasu DatumVrijeme koja je 
    javno izvedena iz klase Datum i dodatno sadrzi hh i mm
    -Konstrukor bez argumenata poziva konstruktor osnovne klase bez argumenata i postavlja vrijeme na 00:00
    -Kosntruktor sa 5 argumenata
    -Predefinisati metodu pisi
*
* 2.Napisati klasu za ulancanu listu datuma
* -- potrebno je napraviti pomocnu klasu za cvor liste (Node). Cvor liste sadrzi datum i pokazivac na sljedeci cvor liste
* -- ulancana lista cuva pokazivac na pocetak liste
* - Konstruktor bez argumenata koji kreira praznu listu 
* - Destruktor 
* - Konstruktor kopije 
* - int duzina() const; +
* - ListaDatuma& dodaj_na_pocetak(Datum); 
* - ListaDatuma& dodaj_na_kraj(Datum); 
* - void ukloni(const Datum &d); //uklanja prvo pojavljivanje +
* - const Datum* najkasniji_datum(); +
* - void pisi() const; 
**/

void ne_radi_nista(ListaDatuma l) {
    cout << "Funckija koja ne radi nista\n";
    return;
}

int main() {

    DatumVrijeme v1, v2(5, 3, 2024, 00, 12);

    v2.pisi(); cout << endl;

    Datum d0 = v2;

    d0.pisi(); cout << endl;

    Datum dd0;
    //DatumVrijeme v3 = dd0;

    Datum* d_ptr = &v2;
    d_ptr->pisi(); cout << endl;
    
    return 0;

    cout << Datum::validan(29, 2, 2025) << endl;

    Datum d1(5, 2, 2024);

    d1.pisi(); cout << endl;
    cout << d1.broj_dana_od_pocetka_godine() << endl;

    Datum d3(13, 2, 2024);
    d3.sljedeci().pisi(); cout << endl;

    d3.prethodni().pisi(); cout << endl;

    Datum d4(5, 6, 2024);
    cout << d4.razlika(d3) << endl;

    cout << d4.get_dan_u_nedelji() << endl;

    ListaDatuma l1;
    l1.dodaj_na_pocetak(d4);
    l1.dodaj_na_pocetak(d4.sljedeci());
    l1.dodaj_na_pocetak(d4.prethodni());
    l1.dodaj_na_pocetak(d3);

    l1.pisi(); cout << endl;

    l1.dodaj_na_kraj(d3.sljedeci());

    l1.pisi(); cout << endl;

    ListaDatuma l2 = l1; // l2(l1);

    l2.dodaj_na_kraj(d3);

    cout << "l1 = "; l1.pisi(); cout << endl;

    ListaDatuma *l4 = new ListaDatuma(l1);

    cout << "Pozivamo funkciju koja ne radi nista\n";
    ne_radi_nista(l1);
    cout << "Zavrsila se funkcija koja ne radi nista\n";

    delete l4;

    l1.ukloni(d4.sljedeci());
    cout << "l1 = "; l1.pisi(); cout << endl;

    ListaDatuma l5 = d4;
    l5.pisi(); cout << endl;


}
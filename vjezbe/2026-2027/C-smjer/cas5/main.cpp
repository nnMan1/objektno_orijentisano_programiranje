/*
* 1. Napisati klasu datum. (d, m,g)
* - Konstruktor bez argumenata, postavlja datum na 1.1.1. +
* - Konstruktor sa 3 argumenta 
* - bool prestupna() const; //provjerava da li je godina prestupna +
* - static bool validan(); //provjerava da li d, m, g predstavlja ispravan datum +
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
*  2.Napisati klasu za ulancanu listu datuma
* -- potrebno je napraviti pomocnu klasu za cvor liste (Node). 
* Cvor liste sadrzi datum i pokazivac na sljedeci cvor liste
* -- ulancana lista cuva pokazivac na pocetak liste
* - Konstruktor bez argumenata koji kreira praznu listu 
* - Destruktor +
* - Konstruktor kopije +
* - int duzina() const; +
* - ListaDatuma& dodaj_na_pocetak(Datum); +
* - ListaDatuma& operator+=(Datum); +
* - d); //uklanja prvo pojavljivanje +
* - const Datum* najkasniji_datum(); +
* - void pisi() const; 
*/
#include "Datum.h"
#include "Lista.h"
#include "iostream"
#include <memory>

using namespace std;

int main() {
    Datum d1(28, 2, 2021);
    cout << "d1.prestupna() " << (d1.prestupna() ? "prestupna" : "nije prestupna") << endl; 
    cout << "d1 = " << d1.get_d() << "." << d1.get_m() << "." << d1.get_g() << "." << endl;
    cout << "d1.br_dana_od_pocetka_godine() = " << d1.br_dana_od_pocetka_godine() << endl;
    cout << "d1.validan() = " << d1.validan() << endl;
    
    Lista l1;

    l1.dodaj_na_pocetak(d1).dodaj_na_pocetak(d1);
    l1.dodaj_na_pocetak(d1);
    l1.dodaj_na_pocetak(Datum(23,10,2025));

    l1.pisi();

    ////////////////////////////////////////////////
    unique_ptr<Datum> up1(new Datum(12, 11, 2026)); //datum se unistava cim se obrise njegov pametni pokazivac
    Datum *temp = up1.get();
    cout << endl<< "Adresa koju cuva up1 " << up1.get() << endl;
    cout << "Vrijednost koju cuva up1 "; up1->pisi(); cout << endl;
    
    // unique_ptr<Datum> up2 = up1; //ne moze jer je up1 vlasnik od tog datuma
    unique_ptr<Datum> up2 = move(up1); //up1 predaje vlasnistvo  up2
                                       //up1 postaje nullptr
    cout << "Adresa koju cuva up1 " << up1.get() << endl;
    cout << "Vrijednost koju cuva up2"; up2->pisi(); cout << endl;
    
    
    return 0;
}
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
* 1.1 Napisati klasu Praznik koja sadrzi 
*   - konstantan atribut naziv
*   - Datum praznika 
*   - konstrukot sa dva argumenta
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
*/

#include "Datum.h"
#include <iostream>
#include <memory>
#include "Lista.h"
#include "DatumVrijeme.h"
#include <stdlib.h>
#include <string>

using namespace std;

class Student {
    string name;
    public:
    Student(const string& name) {
        this->name = name;
    }

    ~Student() {
        cout << "Student "<< name << " unisten." << endl;
    }

    void display() {
        cout << "studen name: " << name << endl;
    }
};

void koristi_referencu(const Student& s) {
    //koristim objekat i ne mijenjam ga
}

void koristim_const_ptr(const Student* s) {
    //koristim objekat i ne mijenjam ga 
    //ali moze da se desi i da bude nullptr
}

void preuzmi_vlasnistvo(unique_ptr<Student> s) {
    //funkcija preuzima vlasnistvo nad s
    //npr ulancana lista pokazivaca, koja je jedini vlasnik 
    //tih objekata
}

void postaje_jedan_od_vlasnika(shared_ptr<Student> s) {
    //funkcija postaje jedan od vlasnika pokazivaca
    //npr. imamo vise listi koje cuvaju iste pokazivace
}

void ne_mijenja_vlasnistvo(weak_ptr<Student> s) {
    //npr. lista koja ne preuzima vlasnistvo nad objektima koji se nalaze u njoj
}

void radiNesto(Datum d) {
    cout << "radim nesto sa Datum "; d.pisi(); cout << endl; 
}

void radiNestoRef(Datum& d) {
    cout << "radim nesto sa Datum&"; d.pisi(); cout << endl;
}

void radiNestoPtr(Datum* d) {
    cout << "radim nesto sa Datum*"; d->pisi(); cout << endl;
}

int main() {

    DatumVrijeme dt1(1, 5, 2027, 10, 00);
    DatumVrijeme dt2;

    cout << "dt1 = "; dt1.pisi(); cout << endl;
    cout << "dt2 = "; dt2.pisi(); cout << endl;

    radiNesto(dt1);
    radiNestoRef(dt1);
    radiNestoPtr(&dt1);

    Datum d1 = dt1;
    Datum* ptr_d1 = &dt1;

    cout << "*ptr_d1 = "; ptr_d1->pisi(); cout << endl;

    Datum **arr = new Datum*[10];
    arr[0] = &dt1;
    arr[1] = new Datum(5, 12, 2026);
    arr[2] = &dt2;
    arr[3] = new Datum(6, 12, 2026);

    cout << "_______________\n";
    for(int i=0;i<4;i++) {
        if(typeid(*(arr[i])) == typeid(Datum))
            cout << "Datum: ";
        else
            cout << "DatumVrijeme: ";
        arr[i]->pisi(); cout << endl;
    }
    cout << "_______________\n";


    int plata = 50;
    // char str[50];

    // sprintf(str, "%d", plata);
    // string s = string(str);
    string str = to_string(plata);



    // int *ptr1 = new int(1);
    // delete ptr1;

    // Datum *ptr1 = new Datum(6, 11, 2026);
    // delete ptr1;

    // unique_ptr<int> up0(new int(5));
    // cout << "*up0 = " << *up0 << endl;


    // unique_ptr<Datum> up1 = make_unique<Datum>(Datum(5, 11, 2026));
    // // unique_ptr<Datum> up1(new Datum(5, 11, 2026)); //up1 je vlasnik ovog pokazivaca
    //                                  //kad se obrise up1, oslobadja se memorija koju
    //                                  //je pokazivac drzao
    // // unique_ptr<Datum> up2 = up1;
    // cout << "Adresa koju cuva up1 je " << up1.get() << endl;
    // cout << "Vrijednost koju cuva up1 je "; up1->pisi(); cout << endl;
    // unique_ptr<Datum> up2 = move(up1);

    // cout << "Adresa koju cuva up1 je " << up1.get() << endl;
    // cout << "Vrijednost koju cuva up2 je "; up2->pisi(); cout << endl;

    // shared_ptr<int> sp1 = make_shared<int>(10);
    // cout << "sp1.use_count() = " << sp1.use_count() << endl;

    // shared_ptr<int> sp2 = sp1;
    // cout << "sp1.use_count() = " << sp1.use_count() << endl;

    // shared_ptr<int> sp3 = sp1;
    // cout << "sp1.use_count() = " << sp1.use_count() << endl;

    // cout << "*sp3 = " << *sp3 << endl;
    // *sp3 = 5;
    // cout << "*sp2 = " << *sp3 << endl;
    // sp3.reset(); //oslobadjate ovaj pokazivac

    // cout << "sp3.get() = " << sp3.get() << endl;
    // cout << "sp1.use_count() = " << sp1.use_count() << endl;

    // weak_ptr<int> wp = sp2; //ne zelite da bude jedan od vlasnika
    //                         //treba da moze da detektuje da li objekat jos postoji
    // sp2.reset();
    // // sp1.reset();

    // if(shared_ptr<int> temp = wp.lock()) {
    //     cout << "*wp2 = " << *temp << endl;
    // } else {
    //     cout << "Objekat je obrisan" << endl;
    // }


    // Datum d1(31, 12, 2026);
    // Datum d2(d1);

    // cout << "d1.prestupna = " << d1.prestupna() << endl;
    // cout << "d1.validan = " << d1.validan() << endl;
    // cout << "d1.od_pocetka_godine = " << d1.broj_dana_od_pocetka_godine() << endl; 
    // cout << "d1 = " ; d1.pisi(); cout << endl; 

    // Lista l1;
    // l1.dodaj_na_pocetak(d1);
    // l1.dodaj_na_pocetak(Datum(23, 10, 2027));
    // l1.dodaj_na_pocetak(d1);

    // l1.print();

    // Datum::staticka_metoda();
    // d1.staticka_metoda();
}
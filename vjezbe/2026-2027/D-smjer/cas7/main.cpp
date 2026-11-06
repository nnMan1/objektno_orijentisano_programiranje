///Napisati sljedece klase
///Apstraktna klasa Tijelo
///     svako tijelo ima string koji predstavlja id tijela
///     ne postoje dva tijela sa istim id-jem
///     cisto virtuelna metoda double zapremina
///     cisto virtuelna metoda Tijelo* kopija
///     virtuelna metoda void pisi()

///Klasa Sfera javno izvedena iz klase Tijelo
///ID za sferu je oblika S1, S2, S3 ...
///Sfera je zadata poluprecnikom             
///Oznaka vrste predmeta je 'S'              
///Stampa se kao id(r). Npr. S2(3)           

///Klasa Valjak javno izvedena iz klase Tijelo
///ID za valjak je oblika V1, V2, V3 ...     
///Zadaje se poluprecnikom r i visinom h      
///Oznaka vrste predmeta je 'V'              
///Stampa se kao id(r, h). Npr V5(3,4)       

///Klasa RedTijela, stvara se prazan red zadatog kapaciteta (podrazumijevano 5).            +
///Implementirati konstruktor kopije
///Moze da se ispita da li je pun ili prazan                                                +
///Da se stavi jedno tijelo na kraj reda operator +=, pokusaj stavljanja u pun baciti exception          +
///Da se uzme tijelo sa i-te pozicije, operator[], uzimanje tijela iz praznog reda prekida program       +
///Metoda pisi. red se ispisuje u obliku r[t, t, ..., t], operator ostream

#include <iostream>
#include "Tijelo.h"
#include "Sfera.h"
#include "Valjak.h"
#include <vector>

using namespace std;

int main() {    
    Sfera s1(5);
    cout << "s1.zapremina() = " << s1.zapremina() << endl;
    cout << "s1.get_id() = " << s1.get_id() << endl;

    Sfera s2(7);
    cout << "s2 = "; s2.pisi(); cout << endl;
    cout << "s2.zapremina() = " << s2.zapremina() << endl;
    cout << "s2.get_id() = " << s2.get_id() << endl;

    Valjak v1(7, 8);
    cout << "v1 = "; v1.pisi(); cout << endl;
    cout << "v1.zapremina() = " << v1.zapremina() << endl;
    cout << "v1.get_id() = " << v1.get_id() << endl;


    Valjak v2(7, 8);
    cout << "v2 = "; v2.pisi(); cout << endl;
    cout << "v2.zapremina() = " << v2.zapremina() << endl;
    cout << "v2.get_id() = " << v2.get_id() << endl;

    Valjak v3 = v2;
    cout << "v3 = "; v3.pisi(); cout << endl;
    cout << "v3.zapremina() = " << v3.zapremina() << endl;
    cout << "v3.get_id() = " << v3.get_id() << endl;

    Tijelo* t1 = &v1;

    vector<Tijelo*> tijela;
    tijela.push_back(&s1);
    tijela.push_back(&s2);
    tijela.push_back(&v1);
    tijela.push_back(&v1);
    tijela.push_back(&v1);

    for(auto t: tijela) {
        t->pisi(); cout << endl;
    }

    Sfera* ptrs1 = dynamic_cast<Sfera*>(t1);
    if(ptrs1) 
        cout << "t1 je sfera";
    else 
        cout << "t1 nije sfera";

    return 0;
}
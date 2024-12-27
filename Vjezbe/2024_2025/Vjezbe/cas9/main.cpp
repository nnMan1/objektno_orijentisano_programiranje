
///Napisati sljedece klase
///Apstraktna klasa Tijelo
///     svako tijelo ima string koji predstavlja id tijela
///     ne postoje dva tijela sa istim id-jem
///     cisto virtuelna metoda char vrsta - vraca karakter koji odredjuje vrstu tijela
///     cisto virtuelna metoda double zapremina
///     cisto virtuelna metoda Tijelo* kopija
///     cisto virtuelna metoda void pisi()

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

using namespace std;

int main() {
    
    //Tijelo t1; //Ne moze jer je tijelo apstraktna klasa
    Sfera s1(5), s2(7);

    s1.pisi(); cout << endl;
    s2.pisi(); cout << endl;

    Sfera s4 = 3 + s1;
    s4.pisi(); cout << endl;

    Tijelo* s3 = new Sfera(6);
    s3->pisi(); cout << endl;

    Valjak v1(3, 5);
    //v1.pisi(); cout << endl;
    cout << v1 << endl;

    Valjak v2 = v1 + v1;
    cout << v1 << "+" << v1 << "=" << v2 << endl;

    //Valjak v2 = v2 + v1;
    //Valjak v2 = v1.operator+(v2);
    //cout << v1;
    //cout.operator<<(v1);


    return 0;
}
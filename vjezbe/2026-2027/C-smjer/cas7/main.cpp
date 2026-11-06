
///Napisati sljedece klase
///Apstraktna klasa Tijelo
///     svako tijelo ima string koji predstavlja id tijela
///     ne postoje dva tijela sa istim id-jem
///     cisto virtuelna metoda char vrsta - vraca karakter koji odredjuje vrstu tijela
///     cisto virtuelna metoda double zapremina
///     cisto virtuelna metoda Tijelo& kopija
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
#include <vector>

using namespace std;

void funkcija(Tijelo& t) {

}

void funkcija1(Sfera s1) {

}

int main() {

    Sfera s1(1);
    cout << s1.get_id() << endl; 

    Sfera s2(1);
    s2.pisi(); cout << ".get_id() = " << s2.get_id() << endl; 

    funkcija1(s1);

    Tijelo* s3 = s1.kopija();
    
    Valjak v1(3, 5);
    cout << v1.get_id() << endl;

    funkcija(v1);
    funkcija(s1);

    vector<Tijelo*> tijela;
    tijela.push_back(&s1);
    tijela.push_back(&s2);
    tijela.push_back(s3);
    tijela.push_back(&v1);

    cout << "Tijela: " << endl;
    for(int i=0;i<tijela.size();i++){
        tijela[i]->pisi(); cout << endl;
    }

    delete s3;


    return 0;
}
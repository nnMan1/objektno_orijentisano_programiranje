#include <iostream>
#include "Tijelo.h"
#include "Red.h"

using namespace std;

template<class T>
T my_abs(T a) {
    if(a < 0)
        return -a;

    return a;
}

///Klasa RedTijela, stvara se prazan red zadatog kapaciteta (podrazumijevano 5).            +
///Implementirati konstruktor kopije
///Implementirati operator dodjele
///Moze da se ispita da li je pun ili prazan                                                +
///Da se stavi jedno tijelo na kraj reda operator +=, pokusaj stavljanja u pun baciti exception          +
///Da se uzme tijelo sa i-te pozicije, operator[], uzimanje tijela iz praznog reda prekida program       +
///Metoda pisi. red se ispisuje u obliku r[t, t, ..., t], operator ostream
/*
int abs(int a) {
    if(a < 0)
        return -a;

    return a;
}

double abs(double a) {
    if(a < 0)
        return -a;

    return a;
}*/

int main()
{
    Red<int> arr1;
    Red<double> arr2;
    Red<Tijelo*> arr3;

    Red<int> arr4 = arr1;
    arr4 = arr4;

    arr1 += 5;
    arr1 += 7;

    for(int i=0;i<2;i++)
        cout << arr1[i] << " " ;

    cout << endl;

    arr4 = arr1;
    for(int i=0;i<2;i++)
        cout << arr4[i] << " " ;


   /* int a = -6;

    cout << my_abs(a);*/
    return 0;
}

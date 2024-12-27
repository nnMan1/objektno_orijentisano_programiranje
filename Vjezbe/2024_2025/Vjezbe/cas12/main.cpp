#include <iostream>
#include <string.h>
#include "Matica.h"
using namespace std;


template<class T, int M>
class Matrica<T, 1, M> {
public:
    Matrica() {
        cout << "Konstruktor 2\n";
    }

    Matrica<T, 1, M> operator*(Matrica<T, 1, M>& m1);

};

template<class T, int n=5>
T add(T x, T y) {
    return x + y + n;
}

template int add<int, 9>(int x, int y); ///eksplicitno zahtijevamo da se generise funkcija sa ovim template

char* add(char* x, char* y) {
    char * ret = new char[strlen(x) + strlen(y) + 2];
    strcpy(ret, x);
    strcat(ret, " ");
    strcat(ret, y);

    return ret;
}

int main()
{
    Matrica<int, 3, 3> m1;
    Matrica<int, 3, 4> m2;

    for(int i=0;i<3;i++)
        m1(i, i) = 2;

    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            m2(i, j) = (i +1) * (j +1);

    Matrica<int, 3, 4> pr = m1 * m2;

    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++)
            cout << pr(i, j) << " ";
        cout << endl;
    }

    /*
    char *ime = "Marko";
    char *prezime = "Markovic";
    cout << add(ime, prezime) << endl;
    cout << add(5, 4);
    cout << add(7, 9);
    cout << add<int, 8>(5, 4);*/
    return 0;
}

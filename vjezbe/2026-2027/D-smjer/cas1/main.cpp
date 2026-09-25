#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

struct student {
    char* ime;
    char* prezime;
    int br_index;
    int god_upisa;

    void stampaj() {
        cout << ime << " " << prezime << " " << br_index << "/" << god_upisa << endl;
    }
};

int zbir(int x, int y) {
    int z = x + y;
    return z;
}

void inc_val(int x) {
    x++;
}

void inc_ptr(int *x_ptr) {
    (*x_ptr) ++;
}

void inc_ref(int &x) {
    x++;
}

void inc_arr(int arr[], int n) {
    for(int i=0;i<n;i++)
        arr[i]++;
}

//napisati funkciju koja uzima prirodan broj n i vraca niz koji sadrzi prvih n
//fibonacijevih brojeva, 1 1 2 3 5 8 13 21 ...
int* create_fib(int n) {
    // int *arr = (int*)malloc(sizeof(int)*n);
    int *arr = new int[n];

    arr[0] = 1;
    if(n > 1)
        arr[1] = 1;

    for(int i=2;i<n;i++)
        arr[i] = arr[i-1] + arr[i - 2]; 

    return arr;
}

void stampaj_studenta(struct student s) {
    cout << s.ime << " " << s.prezime << " " << s.br_index << "/" << s.god_upisa << endl;
}

int main() {

    // int x = 6, y = 5;
    // // scanf("%d%d", &x,&y);
    // cin >> x >> y;
    // inc_val(x); //predaja po vrijednosti ne mijenja x
    // inc_ptr(&x); ///mijenja vrijednost za x
    // inc_ref(x); //mijenja vrijednost za x
    // // int z = x + y;
    // int z = zbir(x, y);
    // // printf("Zbir brojava %d i %d je %d\n", x, y, z);
    // cout << "Zbir brojeva " << x << " i " << y << " je " << z << endl;

    // int arr[10];
    // for(int i=0;i<10;i++)
    //     arr[i] = i + 3;

    // inc_arr(arr, 10); //niz se predaje po referenci, tako da ce svi elementi niza biti uvecani

    // for(int i=0;i<10;i++)
    //     cout << arr[i] << " ";

    // int *fib = create_fib(10);
    // for(int i=0;i<10;i++)
    //     cout << fib[i] << " ";

    // // free(fib);
    // delete[] fib;

    // int *a_ptr = new int(5);
    // cout << *a_ptr << endl;
    // delete a_ptr;

    // int matr[3][5]; //matrica na sacku dimenzija 3 * 5
    // int **matr = new int*[3];
    // for(int i=0;i<3;i++)
    //     matr[i] = new int[5];

    // for(int i=0;i<3;i++)
    //     for(int j=0;j<5;j++)
    //          matr[i][j] = i + j;

    // for(int i=0;i<3;i++) {
    //     for(int j=0;j<5;j++)
    //         cout << matr[i][j] << " ";
    //     cout << endl;
    // }

    // for(int i=0;i<3;i++)
    //     delete[] matr[i];
    // delete[] matr;

    struct student marko = {"marko", "markovic", 5, 25};
    stampaj_studenta(marko);
    marko.stampaj();

    return 0;
}
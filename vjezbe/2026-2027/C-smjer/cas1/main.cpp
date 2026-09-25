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

void inc_val(int x) {
    x++;
}

void inc_ptr(int *x_ptr) {
    (*x_ptr) ++;
}

void inc_arr(int arr[], int n) {
    for(int i=0;i<n;i++)
        arr[i] ++;
}

int zbir(int x, int y) {
    return x + y;
}

int* kreiraj_fib(int n) {
    // 1 1 2 3 5 8 13  ... (a_{n-1} + a_{n-2})
    // int *arr = (int*)malloc(sizeof(int) * n);
    int *arr = new int[n];
    arr[0] = 1;
    if(n > 1)
        arr[1] = 1;

    for(int i=2;i<n;i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    return arr;
}

void stampaj_student(struct student s) {
    cout << s.ime << " " << s.prezime << " " << s.br_index << "/" << s.god_upisa << endl;
}

int main() {
    // printf("Hello world!\n");
    // cout << "Hello" << ' ' << "world" << endl;

    // int x, y;
    // // scanf("%d%d", &x, &y);
    // cin >> x >> y;
    // inc_val(x); //ne mijenja vrijednost promjenjive x
    // // cout << "Zbir brojeva je: " << x + y << endl;
    // cout << "Zbir brojeva je: " << zbir(x, y) << endl; 

    // int *x_ptr = &x;
    // inc_ptr(x_ptr);
    // cout << "Zbir brojeva je: " << zbir(x, y) << endl; 

    // int arr[10];
    // for(int i=0;i<10;i++)
    //     cin >> arr[i];

    // inc_arr(arr, 10);//niz se predaje po referenci, jer je niz pokazivac na prvi element

    // for(int i=0;i<10;i++)
    //     cout << arr[i] << " ";

    // int *fib = kreiraj_fib(10);

    // for(int i=0;i<10;i++)
    //     cout << fib[i] << " ";

    // free(fib);
    // delete[] fib;

    // int *y_ptr = new int();
    // cout << *y_ptr << endl;
    // delete y_ptr;

    // int matr[3][5];

    // int **matr = new int*[3];
    // for(int i=0;i<3;i++)
    //     matr[i] = new int[5];

    // for(int i=0;i<3;i++)
    //     for(int j=0;j<5;j++)
    //         matr[i][j] = i * j;
            
    // for(int i=0;i<3;i++) {
    //     for(int j=0;j<5;j++)
    //         cout << matr[i][j] << " ";
    //     cout << endl;
    // }

    // for(int i=0;i<3;i++)
    //     delete[] matr[i];
    // delete[] matr;

    struct student marko = {"Marko", "Markovic", 5, 25};
    stampaj_student(marko);
    marko.stampaj();

    return 0;
}
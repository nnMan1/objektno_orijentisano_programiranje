#include <iostream>

using namespace std;

// typedef struct student student;

class student {
public:
    char ime[20];
    char prezime[20];
    int br_ind;
    int god_upisa;

    void print_student() {
        cout << ime << " " << prezime;
    }
};

int zbir(int x, int y) {
    return x + y;
}

// void dodaj1(int x) {
//     x += 1;
// }

void dodaj1(int &x) {
    x += 1;
}

void dodaj1(int *x) {
    *x += 1;
}

void uvecaj_elemente(int n, int arr[]) {
    for(int i=0;i<n;i++)
        arr[i] ++;
}

int main() {

    student marko = {"Marko", "Markovic", 1, 25};
    marko.print_student();

    // int *x = new int(); //promjenljiva alocirana na heap-u
    // delete x;

    // int *arr = new int[10]; //alocira niz na heap-u
    // for(int i = 0; i < 10; i++)
    //     arr[i] = i * i;

    // for(int i = 0 ; i < 10; i++) 
    //     cout << arr[i] << endl;

    // delete[] arr; //oslobadja niz sa heap-a

    // int **matr = new int*[5];
    // for(int i = 0; i < 5; i++)
    //     matr[i] = new int[10];

    // int matr[5][10];

    // for(int i = 0; i < 5; i++)
    //     for(int j = 0; j < 10; j++)
    //         matr[i][j] = i * j;

    // for(int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 10; j++)
    //         cout << matr[i][j] << " ";
        
    //     cout << endl;
    // }

    // for(int i = 0; i < 5; i++)
    //     delete[] matr[i];
    // delete[] matr;
    
    // int n;
    // cin >> n;

    // int arr[n];
    // for(int i = 0; i < n; i++) 
    //     cin >> arr[i];

    // uvecaj_elemente(n, arr);

    // for(int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    
    // int x, y;
    // std::cin >> x >> y;

    // dodaj1(x);
    // int s = zbir(x, y);

    // std::cout << s;
    
    /*
    int x = 10;
    int y = 20;
    int z;

    //scanf("%d %d", &x, &y);
    cin >> x >> y;

    int sum = x + y;
    cout << "Suma je: " << sum << endl;

    int *x_prt = &x;
    int *y_prt = &y;

    cout << "Adresa x je: " << x_prt << endl;
    cout << "Adresa y je: " << y_prt << endl;

    int sum1 = *x_prt + *y_prt;
    cout << "Suma preko pokazivaca je: " << sum1 << endl;
    */

    // int n;
    // cout << "Unesite duzinu niza: ";
    // cin >> n;

    // int arr[n];

    // cout << "Unesite elemente niza: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // int s = 0;
    // for(int i = 0; i < n; i++) {
    //     s += arr[i];
    // }

    // cout << "Suma elemanta niza je: " << s << endl;

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Student {
public:
    char ime[20];
    char prezime[20];
    int br_ind;
    int god_upisa;

    void print() {
        cout << ime << " " << prezime << " " << br_ind << "/" << god_upisa << endl;
    }
};

int inc_1(int x) {
    x += 1;
}

int inc_2(int *x) {
    *x += 1;
}

int inc_3(int &x) {
    x += 1;
}

void inc_arr(int n, int *arr) {
    for(int i=0;i<n;i++)
        arr[i] = arr[i] + 1;
}


int main()
{
    Student s1 = {"Marko", "Petrovic", 5, 25};
    s1.print();

    Student s2 = {"Marko", "Markovic", 4, 25};
    s2.print();
    /*
    int arr[5];
    for(int i=0;i<5;i++)
        arr[i] = i * i;

    inc_arr(5, arr);
    for(int i=0;i<5;i++)
        cout << arr[i] << endl;
    /*
    int x = 5;

    inc_3(x);
    cout << x;

    /*
    int *x_ptr = new int();
    delete x_ptr;

    int *arr = new int[5];
    delete[] arr;

    /*for(int i=0;i<5;i++)
        cin >> arr[i];
        //scanf("%d", &x[i]);

    for(int i=0;i<5;i++)
        cout << arr[i] << " ";*/

    /*int x;
    x = 5;

    cout << "x = " << x <<endl;*/

    /*
    int x[5];
    for(int i=0;i<5;i++)
        cin >> x[i];
        //scanf("%d", &x[i]);

    for(int i=0;i<5;i++)
        cout << x[i] << " ";
    */
    //printf("Hello world!\n");
    //cout << "Hello world!" << endl;
    return 0;
}

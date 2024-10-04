#include <iostream>
#include <string.h>
#include "Student.h"

using namespace std;
/*
 void print_student() {
    cout << ime << " " << prezime << " " << br_ind << "/" << god_upisa;
}
*/
class Time{
private:
        int hh, mm;
public:
        int get_hh() const {
            return hh;
        }

        void set_hh(int h) {
            if(h < 0 || h > 23) {
                cout << "Pogresna vrijednost za hh" << endl;
                return;
            }
            hh = h;
        }
};

int main()
{
    /*
    Time t1;
    t1.set_hh(13);
    //t1.mm = 90;

    return 0;*/

    Student s1;
    s1.setData("Marko", "Markovic", 5, 24);

    Student s2;
    s2.setData("Petar", "Petrovic", 8, 24);

    s1.print_student(); cout << endl;
    s2.print_student(); cout << endl;

    Student *s1_ptr = &s1;
    Student arr[50];

    s1 = s2;
    s1.print_student(); cout << endl;

    //(*s1_ptr).print_student();
    s1_ptr->print_student(); cout << endl;

    Student &s1_ref =s1;
    s1_ref.br_ind =25;

    s1.print_student();


    return 0;
}

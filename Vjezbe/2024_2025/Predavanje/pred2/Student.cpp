#include "Student.h"

void Student::setData(char *im, char * pre, int br_i, int g_u) {
        strcpy(ime, im);
        strcpy(prezime, pre);
        br_ind = br_i;
        god_upisa = g_u;

        print_student();
        cout << endl;
    }


 void Student::print_student() {
    cout << ime << " " << prezime << " " << br_ind << "/" << god_upisa;
}

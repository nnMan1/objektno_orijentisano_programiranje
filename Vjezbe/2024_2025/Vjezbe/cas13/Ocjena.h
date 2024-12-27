#ifndef OCJENA_H
#define OCJENA_H
#include "OcjenaException.h"
#include <iostream>

using namespace std;

class Ocjena
{
    char vrijednost;
    int idPredmeta;

    public:
        Ocjena();
        Ocjena(int, char);

        char get_vrijednost() const;
        void set_vrijednost(char);
        int get_id_predmeta() const;
        void set_id_predmeta(int);

        bool operator<(const Ocjena&) const;
        Ocjena& operator++();
        Ocjena operator++(int);
        friend ostream& operator<<(ostream&, Ocjena);

    protected:

    private:
};

#endif // OCJENA_H

#ifndef SKUP_H
#define SKUP_H


class Skup
{
    public:
        Skup();
        Skup(int x);
        virtual ~Skup();

        Skup unija(const Skup&) const;
        Skup& dodaj(const Skup&);
        void print() const;

    protected:

    private:
        int *data;
        int cap;
        int pop;
        //elemente skupa cuvako u sortiranom poretku
};

#endif // SKUP_H

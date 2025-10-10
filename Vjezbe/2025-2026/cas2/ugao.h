#ifndef UGAO_H
#define UGAO_H

class Ugao {
    public:
        void set_rad(double vrijednost);
        void set_step(double);
        double get_step() const;
        double get_rad() const;
        void stampaj() const;
        Ugao plus(Ugao) const;  
        Ugao minus(Ugao) const;
    protected:
    private:
        double vrijednost;
};

#endif
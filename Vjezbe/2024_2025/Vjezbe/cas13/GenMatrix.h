#ifndef GENMATRIX_H
#define GENMATRIX_H

template <class T>
class GenMatrix
{
    T* data;
    int n, m;

    public:
        GenMatrix(int, int);
        virtual ~GenMatrix();

        T& operator()(int, int);
        bool operator==(const GenMatrix<T>&) const ;
        GenMatrix<T> operator-() const ;

        GenMatrix<T>& operator++();   //prefiksni operator ++
        GenMatrix<T> operator++(int); //postfiksni operator ++
        T* reduce_mean();
        GenMatrix<T> operator*(GenMatrix<T>&);

    protected:

    private:
};

#include "GenMatrix.cpp"

#endif // GENMATRIX_H

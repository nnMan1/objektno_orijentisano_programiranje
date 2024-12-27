#ifndef OCJENAEXCEPTION_H
#define OCJENAEXCEPTION_H

#include <exception>
using namespace std;

class OcjenaException: public exception
{
    char * message;
    public:
        OcjenaException(char *);
        OcjenaException(const OcjenaException&);
        virtual ~OcjenaException();

        OcjenaException& operator=(const OcjenaException&);
        const char* what() const noexcept;

    protected:

    private:
};

#endif // OCJENAEXCEPTION_H

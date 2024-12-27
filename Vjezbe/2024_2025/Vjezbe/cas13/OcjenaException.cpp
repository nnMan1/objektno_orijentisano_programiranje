#include "OcjenaException.h"
#include <string.h>

OcjenaException::OcjenaException(char * message)
{
    this->message = strdup(message);
}

OcjenaException::OcjenaException(const OcjenaException& o)
{
    this->message = strdup(o.message);
}

OcjenaException& OcjenaException::operator=(const OcjenaException& o) {
    if(this != &o)
        return *this;

    delete[] message;
    this->message = strdup(message);
    return *this;
}

const char* OcjenaException::what() const noexcept {
    return this->message;
}


OcjenaException::~OcjenaException()
{
    delete[] message;
}

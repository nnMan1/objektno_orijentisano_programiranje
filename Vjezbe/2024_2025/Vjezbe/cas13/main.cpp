#include <iostream>
#include "Ocjena.h"
#include "OcjenaException.h"

using namespace std;

void my_terminate() {
    std::exception_ptr eptr = std::current_exception();
    if (eptr)
    {
        try
        {
            std::rethrow_exception(eptr);
        }
        catch (const std::exception& e)
        {
            cerr << (e.what());
        }
        catch (...)
        {
            cerr << ("Unknown exception.");
        }
    }
    else
    {
        cerr << ("Terminate was called.");
    }

    exit(1);
}

int main()
{
    int x = 5;
    int y = x++;

    set_terminate(my_terminate);
    set_unexpected(my_terminate);

     //Ocjena o1(5, 'P');
    try {
        Ocjena o1(5, 'F');
        cout << o1 << endl;
        cout << o1++ << endl;
        cout << o1 << endl;
        cout << ++o1 << endl;
        cout << o1 << endl;
    } catch(OcjenaException *e) {
        cout << e->what() << endl;
        delete e;
        return 0;
    } catch(exception &e) {
        cout << e.what() << endl;
        return 0;
    } catch (...) {
        cout << "Nepoznati exception" << endl;
        return 0;
    }

    return 0;
}

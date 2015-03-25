#include <iostream>
#include <iomanip> // for setprecision()

#ifdef CHAP_6_2

using namespace std;

int main()
{
    enum Animals
        {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        MAX_ANIMALS
        };

    int anNumberOfLegs[MAX_ANIMALS] = {2,4,4,4,2,0};
    cout << anNumberOfLegs[duck];

}

#endif

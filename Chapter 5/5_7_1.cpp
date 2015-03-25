#include <iostream>
#include <cstdlib>

using namespace std;

#ifdef CHAP_5_7

int Exponent(int nBase, int nExp)
{
    int nValue(1);
    for (int ii = 0; ii < nExp; ii++)
        {
        nValue = nValue * nBase;
        }
    return nValue;
}

int main()
{

    cout << Exponent(2,5) << endl;


    return 0;
}
#endif

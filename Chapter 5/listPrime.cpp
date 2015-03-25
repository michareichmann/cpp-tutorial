#include <iostream>
#include <cstdlib>
#include <cstdio>


using namespace std;

#ifdef LIST_PRIME

int main()
{
    cout << "List until which integer? ";
    int nMax;
    cin >> nMax;
    cout << endl;

    int nCountPrimes(0);
    for (int ii = 1; ii <= nMax; ii++)
        {
        int nCountFactors(0);
        for (int jj = 2; jj <= ii - 1; jj++)
            {
            if (ii % jj != 0)
                {
                nCountFactors++;
                }
            }
        if (nCountFactors == ii - 2)
            {
            if (ii < 10)
                cout << " " << ii << " ";
            else
                cout << ii << " ";
            nCountPrimes++;
            if (nCountPrimes % 5 == 0)
                cout << endl;
            }
        }

    cout << endl << endl << "There are " << nCountPrimes << " prime numbers between 1 and " << nMax << endl;

    return 0;


    //return 0;
}

#endif // LIST_PRIME

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;


unsigned int GetRandomNumber(int nLow, int nHigh)
{
    return (rand() % (nHigh - nLow + 1)) + nLow;
}

int main()
{
    cout << "How many number you want to generate? ";
    int nNumber;
    cin >> nNumber;
    cout << "Enter lower bound: ";
    int nLow;
    cin >> nLow;
    cout << "Enter upper bound: ";
    int nHigh;
    cin >> nHigh;
    cout << endl;

    const int nVectors = 10;

    int nCountNumbers[nVectors] = {};
    //srand(time(0)); // set initial seed value to system clock
    srand(15452);

    for (int nCount=1; nCount <= nNumber; ++nCount)
    {

        int nValue = GetRandomNumber(nLow, nHigh);
        for (int ii(nLow); ii <= nHigh; ii++)
            if (nValue == ii)
                nCountNumbers[ii - nLow]++;
        cout << GetRandomNumber(nLow, nHigh) << " " << GetRandomNumber(nLow, nHigh) << "\t";

        if ((nCount) % 5 == 0)
            cout << endl;
    }
    for (int ii(0); ii < nVectors; ii++)
        cout << endl << "The number of " << ii+1 << "s is: " << nCountNumbers[ii];

}
//#endif // CHAP_5_9

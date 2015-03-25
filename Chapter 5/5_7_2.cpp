#include <iostream>
#include <cstdlib>

using namespace std;

#ifdef CHAP_5_7_2

void PrintSumTo(int nValue, int nStart)
    {
    //int nSum; //starting value
    static int nSumStart = nStart;
    for (int ii = nStart; ii < nValue + nSumStart; ii++)
        {
        if (ii < nValue + nSumStart - 1)
            cout << ii << " + ";
        else
            cout << ii;
        nStart += ii;
        }
    cout << " = " << nStart << endl;
    }


int main()
{

    cout << "What is the nth iteration? ";
    int nValue;
    cin >> nValue;
    cout << "What is your starting point? ";
    int nSum;
    cin >> nSum;
    cout << endl;
    PrintSumTo(nValue, nSum);





    return 0;
}

#endif // CHAP_5_7_2

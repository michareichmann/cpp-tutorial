#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

#ifdef CHAP_6_4

unsigned int GetRandomNumber(int nLow, int nHigh)
{
    return (rand() % (nHigh - nLow + 1)) + nLow;
}



int main()
{

srand(time(0));
int nLow(0);
const int nSize(6);
int nHigh(nSize-1);
int anArray[nSize];

//creates sorted array
for (int ii(0); ii < nSize; ii++)
    {
    anArray[ii] = (ii+1)*10;
    }

//swaps the array randomly
for (int ii(0); ii<30; ii++)
    {
    swap(anArray[GetRandomNumber(nLow, nHigh)], anArray[GetRandomNumber(nLow, nHigh)]);
    }

//prints the random array
for (int ii(0); ii < nSize; ii++)
    {
    cout << anArray[ii] << " ";
    }
cout << endl;

//sorts the array
int nNumberArray;

for (int jj(0); jj < nSize; jj++)
    {
    int nSmallest = jj;
    for (int ii(jj); ii < nSize; ii++)
        {
        if (anArray[ii] > anArray[nSmallest])
            {
            nSmallest = ii;
            }
        }
    swap(anArray[jj],anArray[nSmallest]);
    }

//prints the ordered array
for (int ii(0); ii < nSize; ii++)
    {
    cout << anArray[ii] << " ";
    }
cout << endl;




}

#endif // CHAP_6_4

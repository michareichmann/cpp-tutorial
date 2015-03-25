#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

#ifdef CHAP_6_10

int main()
{
cout << "size of the array:  ";
int nSize;
cin >> nSize;
cout << endl;

int *pnArray = new int[nSize];
for (int ii(0); ii < nSize; ii++)
{
    pnArray[ii] = ii+1;
    cout << pnArray[ii] << " ";
}
cout << endl;
delete[] pnArray;
pnArray[nSize] = {0};
for (int ii(0); ii < nSize; ii++)
{
    cout << pnArray[ii] << " ";
}
cout << endl;

}

#endif // CHAP_6_10


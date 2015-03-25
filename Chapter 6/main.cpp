#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;



int main()
{

struct Persons
{
    int nAge;
    int nHeight;
    int nWeight;
    double dBMI;
};

Persons sMichael;

sMichael.nAge = 26;

int *pInt = &sMichael;
cout << pInt->nAge << endl;
void *pVoid;
pVoid = &sMichael;
cout << &sMichael << endl;
cout << pVoid << endl;
//int *pInt = static_cast<int*>(pVoid);
//cout << *pInt << endl;


}



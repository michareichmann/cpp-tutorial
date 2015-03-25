#include <iostream>
#include <cstdlib>

using namespace std;

#ifdef CHAP_5_5

int main()
{
cout << "How many letters do you want to print? ";
int nNumbers;
cin >> nNumbers;
int ii(1);
char cLetter('a');
while (ii <= nNumbers)
    {

    cout << cLetter << " has ASCII code: " << static_cast<int>(cLetter);
    cout << endl;
    ii += 1;
    cLetter++;
    }


    return 0;
}

#endif // CHAP_5_5

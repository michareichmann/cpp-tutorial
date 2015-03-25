#include <iostream>
#include <iomanip> // for setprecision()

using namespace std;

#ifdef CHAP_6_3

int main()
{
    cout << "Enter a number between 1 and 9:  ";
    int x;
    for (;;)
        {
        cin >> x;
        if (x>0 && x<10)
            break;
        else
            cout << "You entered a wrong number!! Try it again!" << endl;
        }
    int nTest(0);
    int anArray[9] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    for (int ii(0); ii < 9; ii++)
        {
        if (anArray[ii] == x)
            {
            nTest = ii;
            break;
            }
        }
    cout << endl << "The element is: " << nTest;

}

#endif // CHAP_6_3

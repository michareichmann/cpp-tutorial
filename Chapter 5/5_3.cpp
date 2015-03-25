#include <iostream>
#include <cstdlib>

using namespace std;

#ifdef CHAP_5_3

double Calculate(int x, int y, char a)
    {
    switch(a)
        {
        case '+':
            return x+y;
        case '-':
            return x-y;
        case '*':
            return x*y;
        case '/':
            return static_cast<double>(x)/y;
        default:
            exit(1);
        }
    }

int main()
{
    cout << "Enter an integer: ";
    int x;
    cin >> x;
    cout << "Enter an integer: ";
    int y;
    cin >> y;
tryAgain:
    cout << "Enter an operation (+-*/): ";
    char cOperation;
    cin >> cOperation;
    if (!(cOperation == '+' || cOperation == '-' || cOperation == '*' || cOperation == '/'))
        {
        cout << endl << "You entered a false operation! Try it again ;) " << endl;
        goto tryAgain;
        }
    cout << endl << "The result is: " << Calculate(x,y,cOperation) << endl;



    return 0;
}
#endif // CHAP_5_3

#include <iostream>

using namespace std;

struct Fraction
    {
    int numerator;
    int denominator;
    int nNumber;
    };

double multiply(Fraction s1, Fraction s2)
    {
    return static_cast<double>(s1.numerator*s2.numerator) / (s1.denominator * s2.denominator);
    }

void printFraction (Fraction s1)
    {
    cout << s1.nNumber << "st fraction: " << s1.numerator << "/" << s1.denominator << endl;
    }

int main()
{


    Fraction s1;
    s1.nNumber = 1;
    cout << "Enter the first numerator: ";
    cin >> s1.numerator;
    cout << "Enter the first denominator: ";
    cin >> s1.denominator;

    Fraction s2;
    s2.nNumber = 2;
    cout << "Enter the second numerator: ";
    cin >> s2.numerator;
    cout << "Enter the second denominator: ";
    cin >> s2.denominator;

    printFraction(s1);
    printFraction(s2);

    cout << endl << multiply(s1, s2) << endl;

    return 0;
}

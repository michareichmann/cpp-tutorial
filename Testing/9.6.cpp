
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

#ifdef CHAP_9_6

class Digit
{
private:
    int m_nDigit;
public:
    Digit(int nDigit = 0) { m_nDigit = nDigit; }

    void setDigit(int nDigit) { m_nDigit = nDigit; }

    Digit operator++();
    Digit operator--();
    Digit operator++(int);
    Digit operator--(int);
    friend ostream& operator<<(ostream &out, Digit &c1);

    int GetDigit() { return m_nDigit; }
};

ostream& operator<<(ostream &out, Digit &c1)
{
    out << c1.m_nDigit;
    return out;
}

Digit Digit::operator++()
{
    (m_nDigit == 9) ? m_nDigit = 0 : ++m_nDigit;
    return *this;
}

Digit Digit::operator--()
{
    (m_nDigit == 0) ? m_nDigit = 9 : --m_nDigit;
    return *this;
}

Digit Digit::operator++(int)
{
    Digit cResult(m_nDigit);
    ++(*this);
    return cResult;
}

Digit Digit::operator--(int)
{
    Digit cResult(m_nDigit);
    --(*this);
    return cResult;
}

int main()
{
    Digit cMyDig(8);
    cout << cMyDig << endl;
    cMyDig.setDigit(9);
    ++cMyDig;
    cMyDig--;
    cout << cMyDig << endl;



    return 0;
}

#endif // CHAP_9_6


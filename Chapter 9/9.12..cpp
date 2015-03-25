#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#ifdef CHAP_9_12


class MyString
{
private:
    char *m_pchString;
    int m_nLength;

public:
    MyString(char *pchString="")    //constructor
    {
        m_nLength = strlen(pchString) + 1;
        m_pchString= new char[m_nLength];
        strncpy(m_pchString, pchString, m_nLength);
        m_pchString[m_nLength-1] = '\0';
    }

    ~MyString() // destructor
    {
        delete[] m_pchString;
        m_pchString = 0;
    }

    MyString(const MyString& c1); //copy constructor
    MyString& operator=(const MyString &c1); //overloaded assignment operator
    friend ostream& operator<<(ostream &out, MyString &c1);

    char* GetString() { return m_pchString; }
    int GetLength() { return m_nLength; }
};

MyString::MyString(const MyString &c1)
{
    m_nLength = c1.m_nLength;
    if (c1.m_pchString)
    {
        m_pchString = new char[m_nLength];
        strncpy(m_pchString,c1.m_pchString, m_nLength);
    }
    else
        m_pchString = 0;
}

MyString& MyString::operator=(const MyString &c1)
{
    //check self-assignment
    if (this == &c1)
        return *this;
    delete[] m_pchString;
    m_nLength = c1.m_nLength;
    if (c1.m_pchString)
        {
            m_pchString = new char[m_nLength];
            strncpy(m_pchString, c1.m_pchString, m_nLength);
        }
    else
        m_pchString = 0;
    return *this;
}

ostream& operator<<(ostream &out, MyString &c1)
{
    out << c1.m_pchString << endl;
    return out;
}

int main()
{
    MyString cTest("Michael");
    cout << cTest.GetString() << " " << cTest.GetLength() << endl;
    {MyString cCopy = cTest;}
    cout << cTest.GetString() << endl;
    MyString cRene;
    cRene = cTest;
    cout << cRene;


    return 0;
}

#endif // CHAP_9_12

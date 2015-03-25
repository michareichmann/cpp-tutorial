
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cassert>

using namespace std;

#ifdef CHAP_9_8

class IntList
{
private:
    int m_array[10];

public:
int& operator[](const int nIndex);
};

int& IntList::operator[](const int nIndex)
{
    assert(nIndex >=0 && nIndex <10);
    return (m_array[nIndex]);
}

int main()
{
    IntList cMyList;
    for (int ii(0); ii<11; ii++)
    {
        cMyList[ii] = ii;
        cout << cMyList[ii] << endl;
    }


    return 0;
}

#endif // CHAP_9_8

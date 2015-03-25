#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Test
{
    private:
        int m_nX;
        int m_nY;
    public:
        Test(int nX = 0, int nY = 0) : m_nX(nX), m_nY(nY) {}

        int GetX() {return m_nX;}
        int GetY() {return m_nY;}
};

int main()
{
    Test c1, c2, c3(5,6);
    cout << c1.GetX() << c2.GetX() << c3.GetY()<< endl;


    return 0;
}

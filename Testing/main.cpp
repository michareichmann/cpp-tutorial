#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cassert>

using namespace std;

class Matrices
{
private:
    double m_matrix[10][10];

public:
    Matrices()
    {
        for (int ii(0); ii<10; ii++)
            for (int jj(0); jj<10; jj++)
                m_matrix[ii][jj] = 0.0;
    }

    double& operator()(const int nRow, const int nCol);
    void operator()();
    friend void PrintMatrix(Matrices &c1);

};

double& Matrices::operator()(const int nRow, const int nCol)
{
    assert(nRow >=0 && nCol >=0 && nRow<10 && nCol <10);
    return (m_matrix[nRow][nCol]);
}

void Matrices::operator()()
{
    for (int ii(0); ii<10; ii++)
            for (int jj(0); jj<10; jj++)
                m_matrix[ii][jj] = 0.0;
}

void PrintMatrix(Matrices &c1)
{
    for (int ii(0); ii<10; ii++)
     {
        for (int jj(0); jj<10; jj++)
            cout << c1(ii,jj) << " ";
        cout << endl;
    }
    cout << endl;
}


int main()
{
    Matrices cMyMatrix;
    for (int ii(0); ii<9; ii++)
        cMyMatrix(ii+1,ii) = ii;
    PrintMatrix(cMyMatrix);
    cMyMatrix();
    PrintMatrix(cMyMatrix);



    return 0;
}



#include <iostream>
#include <math.h>

using namespace std;


class Numbers
{
private:
	int m_n1, m_n2, m_n3;

public:
	Numbers(int n1 = 0.0, int n2 = 0.0, int n3 = 0.0)
	{
		m_n1 = n1;
		m_n2 = n2;
		m_n3 = n3;
	}

	friend istream& operator>>(istream &in, Numbers &c1);

	int Get1() { return m_n1; };
	int Get2() { return m_n2; };
	int Get3() { return m_n3; };
};

istream& operator>>(istream &in, Numbers &c1)
{
	in >> c1.m_n1;
	in >> c1.m_n2;
	in >> c1.m_n3;
	return in;
}


int main()
{
	/*cout << "Enter three integers: ";
	Numbers c1;
	cin >> c1;*/
	cout << "Enter nMax:  ";
	int nMax;
	cin >> nMax;
	cout << endl;
	bool bCheck(false);

	for (int  ii = 1; ii <= nMax; ii++)
	{
		for (int jj = 1; jj <= sqrt(nMax); jj++)
		{
			if (ii == pow(jj, 2))
			{
				bCheck = true;
				//cout << ii << " ";
			}

		}

	}

	for (int ii(1); ii <= nMax; ii++)
	{
        for (int jj(ii); jj <= nMax; jj++)
        {
            for (int kk(jj); kk <= nMax; kk++)
            {
                //cout << pow(ii, 2) + pow(jj, 2) + pow(kk, 2) << " ";
                for (int ll(1); ll <= sqrt(pow(ii, 2) + pow(jj, 2) + pow(kk, 2)); ll++)
                {
                    if (pow(ii, 2) + pow(jj, 2) + pow(kk, 2) == pow(ll, 2))
                    {
                    cout << ii << " " << jj << " " << kk << endl;
                    }
                }
            }
        }
	}

	//leaves the cmd window open until you press a key and not closes it immediately
	std::cin.clear();
	std::cin.ignore(255, '\n');
	std::cin.get();
	//gives out the value 0 if everything worked fine
	return 0;
}


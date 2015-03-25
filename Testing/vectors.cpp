#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

#ifdef VECTORS

void vAddOne(vector<int> vSig);

int main()
{
    map <string, int> mGrades;
    map <string, int>::iterator mGradesIt;
    vector <int> vSig;
    vector <int>::iterator vSigIt;

//    mGrades["Micha"] = 15;
//    mGrades["Selli"] = 13;
//    mGrades["Gratzi"] = 12;
//
//
//    for (mGradesIt = mGrades.begin(); mGradesIt!=mGrades.end(); mGradesIt++)
//    {
//        cout << mGradesIt->first << " " << mGradesIt->second << endl;
//    }



    for (int ii(0); ii<10; ii++)
    {
        vSig.push_back(ii);
    }

    for (vSigIt = vSig.begin(); vSigIt!=vSig.end(); vSigIt++)
    {
        cout << *vSigIt << " ";
    }

    cout <<endl;

    vAddOne(vSig);



    cout << endl;


    return 0;
}

void vAddOne(vector<int> vSig)
{
    vector <int>::iterator vSigIt;
    for (vSigIt = vSig.begin(); vSigIt!=vSig.end(); vSigIt++)
    {
        *vSigIt += 1;
        cout << *vSigIt << " ";
    }
}

#endif //VECTORS

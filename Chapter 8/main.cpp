#include <iostream>
#include <vector>
#include <stdint.h>
#include <fstream>


using namespace std;



int main()
{
    int nArray[5] = {0,1,2,4,5};
    int nCount(1);
    int nStart(1);
    int nStop(5);

    ofstream myfile;
    myfile.open ("example.txt");



    for (int ii=nStart; ii<nStop; ii++ )
        myfile <<  "Person " <<  ii << " takes " << nArray[ii] << " hours" << endl;
    myfile << endl;

    for (int ii(nStart); ii<nStop; ii++)
    {for (int jj(nStart); jj<nStop; jj++)
    {for (int kk(nStart); kk<nStop; kk++)
    {for (int ll(nStart); ll<nStop ; ll++)
    {for (int mm(nStart); mm<nStop; mm++)
    {for (int nn(nStart); nn<nStop; nn++)
    {
                    if (ii != jj && kk!=jj && ll>kk && ll!=jj && (mm==kk || mm==ll || mm==jj) && nn!=mm && nn!=ll && nn!=kk && nn!=jj)
                    {
                        myfile << nCount;
                        myfile << "\t(" << ii << " + " << jj << " --> ) (" << ii << " <-- ) (" << kk << " + " << ll;
                        myfile << " --> ) (" << mm << " <-- ) (" << mm << " + " << nn << " --> )  ";
                        myfile << ((ii>jj) ? nArray[ii] : nArray[jj]) + nArray[ii] + nArray[ll] + nArray[mm] + ((nn>mm) ? nArray[nn] : nArray[mm]) << " Hours overall" << endl;
                        nCount += 1;
                    }
    }}}}}}

    myfile.close();

    return 0;
}

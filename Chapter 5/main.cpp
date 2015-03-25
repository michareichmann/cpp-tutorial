#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

#ifdef MAINd
int main()
{
    int n, a;
        cin >> n;
        for(int i = 2; i < n ; i++){
                a = 1;
                for(int j = 2; j <= i ; j++){
                        if((i % j) == 0){
                                a = a+1;
                        }
                }
                if(a == 2){
                        cout << i << " ";
                }
        }


}

#endif

//scope resolution operator.
#include <iostream>
using namespace std;


int m=10;                    //global variable.

int main()
{
    int m =20;              //local main variable.

    {
        int k=m;            //m declared again.
        int m=30;           //local to inner block.

        cout << "We are in the inner block \n";
        cout << "k="<< k <<"\n";
        cout << "m="<< m <<"\n";
        cout << "::m="<<::m <<"\n";

    }
    cout << "\n We are in outer block \n";
    cout << "m="<< m << "\n";
    cout << "::m="<< ::m <<"\n";

    return 0;
}
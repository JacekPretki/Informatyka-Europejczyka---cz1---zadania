#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int i=0, k=1; i<4; i++)
    {
        for (int j=0; j<3; j++,k+=2)
        {
            cout << k << "\t";
        }
        k--;
        cout << endl;
    }

    return 0;
}

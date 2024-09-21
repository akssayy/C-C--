#include <iostream>
using namespace std;

int main()
{
    int a[2][3],i,j;
    cout << "enter the elements: ";
    for (i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {   
            cout << "Element " << i << "" << j << ": ";
            cin >> a[i][j];
        }
    }
}
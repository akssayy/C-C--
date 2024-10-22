#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a[50],size,i;
    cout << "enter size if array :" ;
    cin >> size ;
    cout << "enter elements of array :";
    for( i=0; i<size; i++)
    {
        cin >> a[i];

    }
        cout << "elements in array are:" ;
        for(i=0; i<size;i++) 
        {
            cout <<a[i];
        }
        return 0;
}
#include <iostream>
using namespace std;

int main()
{
        int array [10], n, x;
        cout << "enter size of array: ";
        cin >> n;
        cout << "enter array elements: ";
        for(int i=0; i<n; i++)
        {
            cin >> array[i];
        }
        cout << "Enter the element at the begining: ";
        cin >> x;
        for (int i=n; i>0; i--)
        {
            array[i] = array[i-1];
        }
        array[0] = x;
        n++;
        cout << "array elements are : ";
        for (int i = 0; i<n; i++)
        {
            cout << array[i] <<endl;
        }
        return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int nums[] = {5,15,78,2,1,-13,9};
    int size = 7 ;
    int largest = INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(nums[i] > largest)
        {
            largest = index.of(nums);
        }
    }
 cout << "largest = " << largest << endl;
 return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int nums[] = {5,15,78,2,1,-13,9};
    int size = 7 ;
    int smallest = INT_MAX;

    for(int i=0; i<size; i++)
    {
        if(nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
 cout << "smallest = " << smallest << endl;
 return 0;
}
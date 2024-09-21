#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;  // Define the size of the array
    int numbers[SIZE];   // Declare an array of size 5
    int sum = 0;         // Variable to store the sum of the array elements

    // Input: Reading values into the array
    cout << "Enter 5 integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];  // Store each integer in the array
        sum += numbers[i];  // Add the integer to the sum
    }

    // Output: Displaying the array elements and the sum
    cout << "You entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";  // Print each element of the array
    }
    cout << endl;

    cout << "Sum of the elements: " << sum << endl;  // Print the sum

    return 0;
}
tup = (1,2,3,4,5)
print(max(tup))
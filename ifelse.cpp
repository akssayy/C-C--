#include <iostream>  // Include the standard input-output stream library

using namespace std; // Use the standard namespace

int main() {
    int number;  // Declare an integer variable to store the number

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> number;  // Store the user input in the 'number' variable

    // If-else statement to check if the number is positive, negative, or zero
    if (number > 0) {
        // This block will execute if the number is greater than 0
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        // This block will execute if the number is less than 0
        cout << "The number is negative." << endl;
    } else {
        // This block will execute if the number is exactly 0
        cout << "The number is zero." << endl;
    }

    return 0;  // Indicate that the program ended successfully
}

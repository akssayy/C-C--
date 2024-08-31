#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number between 1 and 5: ";
    cin >> number;

    // Switch statement to handle different cases
    switch (number) {
        case 1:
            cout << "You entered One." << endl;
            break;
        case 2:
            cout << "You entered Two." << endl;
            break;
        case 3:
            cout << "You entered Three." << endl;
            break;
        case 4:
            cout << "You entered Four." << endl;
            break;
        case 5:
            cout << "You entered Five." << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 5." << endl;
            break;
    }

    return 0;
}

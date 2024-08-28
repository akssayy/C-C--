#include <iostream>

using namespace std;

int main() {
    int var = 10;  // Declare an integer variable
    int* ptr;      // Declare a pointer variable

    ptr = &var;    // Store the address of var in ptr

    cout << "Value of var: " << var << endl;
    cout << "Address of var (&var): " << &var << endl;
    cout << "Pointer ptr holds the address: " << ptr << endl;
    cout << "Value at the address held by ptr (*ptr): " << *ptr << endl;

    // Modify the value of var using the pointer
    *ptr = 20;
    cout << "Value of var after modification: " << var << endl;

    return 0;
}

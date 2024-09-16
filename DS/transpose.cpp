#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get the size of the matrix
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    // Declare the matrix
    int matrix[100][100], transpose[100][100];

    // Input elements of the matrix
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output the transposed matrix
    cout << "The transposed matrix is:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

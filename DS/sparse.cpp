#include <iostream>
#include <vector>

using namespace std;

// Structure to represent a sparse matrix element
struct SparseElement {
    int row;
    int col;
    int value;
};

// Sparse matrix class
class SparseMatrix {
private:
    int rows, cols; // Dimensions of the matrix
    vector<SparseElement> elements; // List of non-zero elements

public:
    SparseMatrix(int r, int c) : rows(r), cols(c) {}

    // Add non-zero element to the matrix
    void addElement(int row, int col, int value) {
        if (value != 0) {
            elements.push_back({row, col, value});
        }
    }

    // Display the sparse matrix in triplet form
    void displaySparse() {
        cout << "Sparse Matrix (row, col, value):" << endl;
        for (auto& el : elements) {
            cout << "(" << el.row << ", " << el.col << ", " << el.value << ")" << endl;
        }
    }

    // Function to display the matrix in its normal form
    void displayMatrix() {
        cout << "Full Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int value = 0;
                for (auto& el : elements) {
                    if (el.row == i && el.col == j) {
                        value = el.value;
                        break;
                    }
                }
                cout << value << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    SparseMatrix matrix(5, 5);

    // Adding non-zero elements
    matrix.addElement(0, 1, 3);
    matrix.addElement(1, 2, 5);
    matrix.addElement(3, 4, 7);

    // Display sparse matrix in triplet form
    matrix.displaySparse();
    
    // Display full matrix
    matrix.displayMatrix();

    return 0;
}

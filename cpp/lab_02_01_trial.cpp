#include <iostream>
using namespace std;

const int MAX = 100;

// Structure to represent a sparse matrix element
struct Element
{
    int row, col, value;
};

// Function to display the linear representation of a sparse matrix
void displaySparseMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    int sparse[MAX][3]; // Array to store sparse matrix representation
    int k = 0;          // Initialize index for sparse matrix array

    // Convert the matrix to sparse representation
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] != 0)
            {
                sparse[k][0] = i;            // Row index
                sparse[k][1] = j;            // Column index
                sparse[k][2] = matrix[i][j]; // Value
                k++;
            }
        }
    }
    cout << "Linear representation of the sparse matrix:" << endl;
    for (int i = 0; i < k; ++i)
    {
        cout << "(" << sparse[i][0] << ", " << sparse[i][1] << "): " << sparse[i][2] << endl;
    }
}

int main()
{
    int rows, cols;

    cout << "Enter the number of rows in the matrix: ";
    cin >> rows;

    cout << "Enter the number of columns in the matrix: ";
    cin >> cols;

    int sparse_Matrix[MAX][MAX];

    cout << "Enter the elements of the sparse matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> sparse_Matrix[i][j];
        }
    }

    displaySparseMatrix(sparse_Matrix, rows, cols);

    return 0;
}

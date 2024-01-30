// Write a C++ program to display a linear representation of the sparse matrix
#include <iostream>

using namespace std;

#define R 4 // Number of rows
#define C 5 // Number of columns

int main()
{
    // Sparse matrix (replace with your actual matrix)
    int sparseMatrix[R][C] = {
        {0, 5, 0, 0, 0},
        {0, 0, 8, 0, 0},
        {0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0}};

    // Count non-zero elements
    int count = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (sparseMatrix[i][j] != 0)
            {
                count++;
            }
        }
    }

    // Create linear representation array
    int linear[3][count]; // 3 columns: row, column, value

    // Store non-zero elements in linear representation
    int k = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (sparseMatrix[i][j] != 0)
            {
                linear[0][k] = i;                  // Row index
                linear[1][k] = j;                  // Column index
                linear[2][k] = sparseMatrix[i][j]; // Value
                k++;
            }
        }
    }

    // Display linear representation
    cout << "Linear Representation of Sparse Matrix:\n";
    cout << "Row\tColumn\tValue\n";
    for (int i = 0; i < count; i++)
    {
        cout << linear[0][i] << "\t" << linear[1][i] << "\t" << linear[2][i] << endl;
    }

    return 0;
}

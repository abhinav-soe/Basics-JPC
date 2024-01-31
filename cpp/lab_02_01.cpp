// Write a C++ program to display a linear representation of the sparse matrix.
#include <iostream>
using namespace std;
#define MAX_ROW 50
#define MAX_COL 50
void sparseToLinear(int row, int col)
{
    int sparse_Matrix[MAX_ROW][MAX_COL], linear[MAX_ROW][3];
    int i, j, k = 0;
    cout << "Enter values for matrix" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> sparse_Matrix[i][j];
        }
    }
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            if (sparse_Matrix[i][j] != 0)
            {
                linear[k][0] = i;
                linear[k][1] = j;
                linear[k][2] = sparse_Matrix[i][j];
                k++;
            }
        }
    }
    cout << "The Linear representation of the sparse matrix :" << endl;
    for (i = 0; i < k; ++i)
    {
        cout << "(" << linear[i][0] << "," << linear[i][1] << "):" << linear[i][2] << endl;
    }
}

int main()
{
    int row, col;
    cout << "Enter number of rows: " << endl;
    cin >> row;
    cout << "Enter number of columns: " << endl;
    cin >> col;
    sparseToLinear(row, col);
    return 0;
}
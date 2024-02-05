// Write a C++ program for the matrix representation of polynomial equations.
#include <iostream>
#include <cmath>
using namespace std;
const int MAX_DEGREE = 100;
void PolynomialMatrix(int coefficients[], int degree)
{
    cout << "Polynomial Equation: ";
    for (int i = degree; i >= 0; --i)
    {
        if (coefficients[i] != 0)
        {
            cout << coefficients[i] << "x^" << i;
            if (i != 0)
            {
                cout << " + ";
            }
        }
    }
    int polyMatritx[MAX_DEGREE][2];
    int k = 0;
    for (int i = 0; i <= degree; ++i)
    {
        polyMatritx[k][0] = i;
        polyMatritx[k][1] = coefficients[i];
        k += 1;
    }
    cout << "\nThe Matrix Representation is:\n";
    cout << "EXPONENT|COEFFICIENT" << endl;
    for (int i = 0; i < k; ++i)
    {
        cout << polyMatritx[i][0] << "\t  " << polyMatritx[i][1] << endl;
    }
}

int main()
{
    int degree;
    int coefficients[MAX_DEGREE + 1];
    cout << "Enter the degree of polynomial: ";
    cin >> degree;
    cout << "Enter the coefficients of the polynomial (from highest to lowest degree):" << endl;
    for (int i = degree; i >= 0; --i)
    {
        cin >> coefficients[i];
    }
    PolynomialMatrix(coefficients, degree);
    return 0;
}

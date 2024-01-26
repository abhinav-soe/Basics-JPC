// Write a C++ program to sum the series x - x 2 / 2 !+x 4 / 4 ! – x 6 / 6 !- - - - -- -n terms
#include <iostream>
#include <cmath>
using namespace std;
unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * (factorial(n - 1));
    }
}

long double sumOfSeries(int num, int term)
{
    long double sum, result = 0;
    int i;
    for (i = 1; i < term; i++)
    {
        sum = pow(num, 2 * i) / factorial(2 * i);
        result = result + (pow(-1, i) * sum);
    }
    return result + num;
}
int main()
{
    int num, term;
    cout << "Enter the value of number: ";
    cin >> num;
    cout << "\nEnter the number of terms: ";
    cin >> term;
    int sumSeries = sumOfSeries(num, term);
    cout << "\nThe Sum of Series is :" << sumSeries;
}

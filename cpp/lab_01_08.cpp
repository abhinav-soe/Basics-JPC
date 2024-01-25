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

int main()
{
    int x, n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "\nEnter the number of terms: ";
    cin >> n;
    float sum = 0.0;
    for (int i = 0; i < n; ++i)
    {
        float term = pow(-1, i) * pow(x, 2 * i) / static_cast<float>(factorial(2 * i));
        sum += term;
    }

    cout << "The sum of the series is : " << sum << endl;
    return 0;
}

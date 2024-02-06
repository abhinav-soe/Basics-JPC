// Write a C++ program to calculate factorial of user defined input using recursion.
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    cout << "Enter  the number: ";
    cin >> num;
    cout << "Factorial of " << num << " is : " << factorial(num) << endl;
    return 0;
}
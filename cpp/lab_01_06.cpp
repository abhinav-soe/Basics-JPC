// Write a C++ program to find a sum of first ‘n’ natural numbers(where n is defined by user)
#include <iostream>
using namespace std;
int main()
{
    int n;
    long sum = 0;
    cout << "Enter The Limit: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "\nThe sum is: " << sum;
    return 0;
}
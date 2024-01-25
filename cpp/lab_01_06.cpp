// Write a C++ program to find a sum of first ‘n’ natural numbers(where n is defined by user)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Limit: ";
    cin >> n;
    cout << "The Natural Number are as follows:-" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}
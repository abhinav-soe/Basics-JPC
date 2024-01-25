// Write a C++ program to find the minimum of three numbers using user defined input
#include <iostream>
using namespace std;
int main()
{
    int x, y, z, a;
    cout << "\nEnter First Number ";
    cin >> x;
    cout << "\nEnter Second Number ";
    cin >> y;
    cout << "\nEnter Third Number ";
    cin >> z;
    if (x >= y)
    {
        if (x >= z)
        {
            a = x;
        }

        else
        {
            a = z;
        }
    }
    else if (y >= z)
    {
        a = y;
    }
    else
    {
        a = z;
    }
    cout << "\nThe maximum value is : ";
    cout << a;
    return 0;
}
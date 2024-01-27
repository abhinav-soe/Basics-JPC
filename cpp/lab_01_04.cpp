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
    a = x;
    if (y < a)
    {
        a = y;
    }
    if (z < a)
    {
        a = z;
    }
    cout << "\nThe minimum value is : ";
    cout << a;
    return 0;
}
// Write a C++ to generate Fibonacci sequence till user defined input terms.
#include <iostream>
using namespace std;
void Fibonacci(int n)
{

    int tempA = 0, tempB = 1, tempC;
    cout << "The Fibonacci Series till " << n << " terms are:-" << endl;
    for (int i = 0; i < n; ++i)
    {
        if (i <= 1)
        {
            tempC = i;
        }
        else
        {
            tempC = tempB + tempA;
            tempA = tempB;
            tempB = tempC;
        }
        cout << tempC << ",";
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "Enter the number of terms ";
    cin >> num;
    Fibonacci(num);
    return 0;
}
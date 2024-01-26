// Write a C++ program to find a difference of place values of n+1 th and n th digits in a number x (where x
// and n are defined by user and n is less than the number of digits in the x).
#include <iostream>
#include <cmath>
using namespace std;

int findDigit(int num, int pos)
{
    if (pos <= 0)
    {
        cout << "Invalid Digit Position" << endl;
        return -1;
    }
    int divisor = pow(10, pos - 1);
    int result = static_cast<int>(num / divisor) % 10;
    return result;
}

int placeValueDifference(int nthDigit, int nth_1Digit, int digitPosition)
{
    int nthDigitPlace = nthDigit * pow(10, digitPosition - 1);
    int nth_1DigitPlace = nth_1Digit * pow(10, digitPosition);
    cout << nthDigitPlace << endl;
    cout << nth_1DigitPlace << endl;
    return nthDigitPlace - nth_1DigitPlace;
}

int main()
{
    int nthDigit, nth_1Digit;
    int originalNumber, digitPosition;
    cout << "Enter an integer: ";
    cin >> originalNumber;
    cout << "Enter the position: ";
    cin >> digitPosition;
    nthDigit = findDigit(originalNumber, digitPosition);
    cout << nthDigit << endl;
    nth_1Digit = findDigit(originalNumber, digitPosition + 1);
    cout << nth_1Digit << endl;
    int diff = placeValueDifference(nthDigit, nth_1Digit, digitPosition);
    cout << "The difference between digits is: ";
    cout << diff;
    return 0;
}
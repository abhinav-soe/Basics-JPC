// Write a C++ program that accepts a four - digit number from the user at run time and print it in
// reverse form.(Ex.6512 = > 2156)
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int reverseNum(int num)
{
    stack<int> numStack;
    int a = num;
    int revNum = 0;
    while (a > 0)
    {
        int digit = a % 10;
        a = a / 10;
        numStack.push(digit);
    }
    int power = 1;
    while (!numStack.empty())
    {
        revNum += numStack.top() * power;
        numStack.pop();
        power *= 10;
    }
    return revNum;
}
int main()
{
    int num;
    cout << "Enter the number to be reversed ";
    cin >> num;
    int result = reverseNum(num);
    cout << "The Reverse of " << num << " is : " << result << endl;
    return 0;
}

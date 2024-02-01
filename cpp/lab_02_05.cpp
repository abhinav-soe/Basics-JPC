// Write a C++ program using a stack to determine if an input character string is of the form a ^ ib ^ i where i >=1
// (You can use stack library)
#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isValidString(string str)
{
    stack<char> Stack;
    // int counta = 0, countb = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a')
        {
            Stack.push(str[i]);
        }
        else if (str[i] == 'b')
        {
            if (Stack.empty() != true)
            {
                Stack.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    return Stack.empty();
}

int main()
{
    string str;
    cout << "Enter String :";
    cin >> str;
    bool result = isValidString(str);
    if (result)
    {
        cout << "The entered string is valid according to the given grammar." << endl;
    }
    else
    {
        cout << "The entered string is invalid according to the given grammar." << endl;
    }
    return 0;
}
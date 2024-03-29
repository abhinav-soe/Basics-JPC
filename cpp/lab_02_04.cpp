// Write a C++ program using stack which will check that the given string belongs to grammar L =
// {wcw R | w{a, b} * }(Where w R is the reverse of w and c is in middle) or not .(You can use stack library)
#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isValidString(string str)
{
    stack<char> Stack;
    for (int i = 0; i < (str.length() / 2); i += 1)
    {
        Stack.push(str[i]);
    }
    for (int j = ((str.length()) / 2) + 1; j < str.length(); j += 1)
    {
        if (!Stack.empty() && Stack.top() == str[j])
        {
            Stack.pop();
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
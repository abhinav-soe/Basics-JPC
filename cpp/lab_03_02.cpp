// Write a C++ program to evaluate postfix expression[use only digit and basic set of operators i.e.+, -, *, and / ].
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int postfixToAnswer(const string postfix)
{
    stack<int> operand;
    int tempB = 0, tempA = 0, result;
    for (char c : postfix)
    {
        if (isalnum(c))
        {
            operand.push(c - '0');
        }
        else
        {
            switch (c)
            {
            case '+':
                tempB = operand.top();
                operand.pop();
                tempA = operand.top();
                operand.pop();
                operand.push((tempA + tempB));
                break;
            case '-':
                tempB = operand.top();
                operand.pop();
                tempA = operand.top();
                operand.pop();
                operand.push((tempA - tempB));

                break;

            case '*':
                tempB = operand.top();
                operand.pop();
                tempA = operand.top();
                operand.pop();
                operand.push((tempA * tempB));
                break;
            case '/':
                tempB = operand.top();
                operand.pop();
                tempA = operand.top();
                operand.pop();
                operand.push((tempA / tempB));
                break;
            }
        }
    }
    if (operand.size() == 1)
    {
        return operand.top();
    }
    else
    {
        cout << "Invalid String" << endl;
        return -1;
    }
}

int main()
{
    string postfix;
    cout << "Enter String ";
    getline(cin, postfix);
    int result = postfixToAnswer(postfix);
    cout << "Result is :" << result << endl;
    return 0;
}

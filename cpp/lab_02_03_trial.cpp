#include <iostream>
using namespace std;

class Stack
{
private:
    int arr_s[10];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    bool isFull()
    {
        return top == 9;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(int value)
    {
        if (!isFull())
        {
            arr_s[++top] = value;
            cout << "Pushed: " << value << endl;
        }
        else
        {
            cout << "Stack overflow! Cannot push " << value << endl;
        }
    }

    void pop()
    {
        if (!isEmpty())
        {
            cout << "Popped: " << arr_s[top--] << endl;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    void display()
    {
        if (!isEmpty())
        {
            int i;
            cout << "Stack elements: ";
            for (i = 0; i <= top; i += 1)
            {
                cout << arr_s[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "No elements in Stack" << endl;
        }
    }
};

int main()
{
    Stack test_s;

    test_s.push(5);
    test_s.push(4);
    test_s.push(1);
    test_s.push(2);
    test_s.push(3);

    test_s.display();

    test_s.pop();
    test_s.pop();

    return 0;
}

// Write a C++ program where you take a sentence as an input from the user and output each word of a
// sentence in a separate line
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string str, word;
    cout << "Enter a sentence: ";
    getline(cin, str);
    istringstream iss(str);
    while (iss >> word)
    {
        cout << word << '\n';
    }
}
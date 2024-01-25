// Write a C++ program to print a string without using ‘namespace std’
#include <iostream>
#include <string>
int main()
{
    std::string str_02;
    std::cout << "Enter String ";
    std::getline(std::cin, str_02);
    std::cout << str_02;
    return 0;
}
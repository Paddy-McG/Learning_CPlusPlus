#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>

int main ()
{

    char str[31];

    std::cout << "Please enter a digit between a length of 4 - 30" <<std::endl;

    std::cin >> str;
    std::cout << "The String you have entered is " << str << std::endl;

    return 0;
}
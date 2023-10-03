#include <iostream>
#include <cctype>

int main () 
{
    //Printing to the screen
    std::cout << "Hello World!" << std::endl;

    int a = 5;
    int b = 8; 

    //Learning how to find the bigger of two numbers

    int maxVal = std::max(a,b);
    std::cout << "The highest value is " <<maxVal<<std::endl;

    //Learning how to find the mininmalvalue of two

    int minVal = std::min(a,b);
    std::cout << "The lowest value if the two digits is " << minVal << std::endl;

    //Learning how to make a char a capital

    char ch = 'a';
    char upperCaseChar = std::toupper(ch);
    std::cout << "The uppercase of the character a is " << upperCaseChar << std::endl;

    //Learning how to take input from the console

    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    std::cout << "The number you have entered is " << num << std::endl;

    return 0;
}
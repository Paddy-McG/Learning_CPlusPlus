#include <iostream>
#include <cctype>

int main () 
{
    //Printing to the screen
    std::cout << "Hello World!" << std::endl;

    int a = 5;
    int b = 8; 

    int maxVal = std::max(a,b);
    std::cout << "The highest value is " <<maxVal<<std::endl;

    return 0;
}
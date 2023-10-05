#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>

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

    //To create a line that is continous you use 

    std::cout << "This line is continious";

    //To create a line that jumps to the next line after its end we use

    std::cout << "This line breaks after this sentence" << std::endl;
    std::cout << "Seeeeeeeee" << std::endl;

    //To create a vector / array

    std::vector<int> numbers = {1, 8, 3, 9, 4};
    int firstElement = numbers[0];

    // Does the same thing
    std::cout << "The first element of the vector is " << firstElement << std::endl;
    std::cout << "The first element of the vector is " << numbers[0] << std::endl;

    std::vector<double> array = {1.9, 54, 6.78, 67, 54, 5.6, 90, 43};
    std::cout << "The first number in this new array is " << array[0] << std::endl;

    //Sorting out the array works for both integers and doubles
    std::sort(array.begin(), array.end());
    for(int i = 0; i < array.size(); i ++)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;

    // finding a number in a vector

    auto it = std::find(numbers.begin(), numbers.end(), 3);
    if(it != numbers.end())
    {
        std::cout << "The element 3 is found at index " << it - numbers.begin() << std::endl;
    } else {
        std::cout << "The element is not found in the vector" << std::endl;
    }

    return 0;
}
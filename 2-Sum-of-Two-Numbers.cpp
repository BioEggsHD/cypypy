#include <iostream>

int main() 
{
    int number1, number2;
    
    std::cout << "Enter two integers.\nNumber 1: ";
    std::cin >> number1;
    
    std::cout << "Number 2: ";
    std::cin >> number2;
    
    if(!(std::cin))
    {
        std::cerr << "Please provide valid input.\n";
        return 1;
    }
    
    std::cout << "Sum of " << number1 << " and " << number2 << ": " << number1 + number2 << "\n";
    
    return 0;
}

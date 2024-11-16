#include <iostream>

int main() 
{
    int number1, number2;
    char operation;
    
    std::cout << "Enter your first Number: ";
    std::cin >> number1;
    std::cout << "Enter your second Number: ";
    std::cin >> number2;
    std::cout << "Enter your operation (+ or -): ";
    std::cin >> operation;
    
    if(!(std::cin))
    {
        std::cerr << "Please provide valid input.\n";
        return 1;
    }
    
    switch(operation)
    {
        case '+':
            std::cout << number1 << " + " << number2 << " equals: " << number1 + number2 << "\n";
            break;
        
        case '-':
            std::cout << number1 << " - " << number2 << " equals: " << number1 - number2 << "\n";
            break;
        default:
            std::cerr << "Seems like you didn\'t enter + or -!\n";
            return 1;
    }
    
    return 0;
}

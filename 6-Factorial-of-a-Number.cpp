#include <iostream>

int factorial(int number)
{
    int result = 1;
    for(int i = 2; i <= number; i++)
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int number;
    
    std::cout << "Enter your Number: ";
    std::cin >> number;
    
    if(!(std::cin))
    {
        std::cerr << "Please provide valid input!\n";
        return 1;
    }
    
    std::cout << "Factorial of " << number << " is " << factorial(number) << "\n";
    
    return 0;
}

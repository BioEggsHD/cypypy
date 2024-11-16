#include <iostream>

int main() 
{
    int number;
    
    std::cout << "Enter your Number: ";
    std::cin >> number;
    
    if(!(std::cin))
    {
        std::cerr << "Please provide valid input.\n";
        return 1;
    }
    
    std::cout << (number % 2 ? "Odd!" : "Even!");
    std::cout << '\n';
    
    return 0;
}

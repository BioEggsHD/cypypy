#include <iostream>

int main() {
    int number;
    
    std::cout << "Enter your Number: ";
    std::cin >> number;
    
    if(!(std::cin) || number < 1)
    {
        std::cerr << "Please provide valid input!\n";
        return 1;
    }
    
    for (int i = 1; i <= 10; i++) //Multiplication Table up to 10
    {
        std::cout << number << " x " << i << " = " << number * i << '\n';
    }
    return 0;
}

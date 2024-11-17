#include <iostream>
int main()
{
    int number1, number2;
    
    std::cout << "Enter your numbers.\nNumber 1: ";
    std::cin >> number1;
    std::cout << "Number 2: ";
    std::cin >> number2;
    
    if (!(std::cin))
    {
        std::cerr << "Please provide valid input!\n";
        return 1;
    }
    
    std::cout << "Even numbers between " << number1 << " and " << number2 << " are: ";
    
    if (! (number1 % 2 == 0))
    {
        number1++;
    }
    
    for (int i = number1; i <= number2; i+=2)
    {
        std::cout << i << " ";
    }
    std::cout << '\n';
    
    return 0;
}

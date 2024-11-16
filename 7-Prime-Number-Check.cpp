#include <iostream>
#include <cmath>

bool prime(int number)
{
    if (number == 1)
    {
        return false;
    }
    if (number == 2)
    {
        return true;
    }
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main() {
    int number;
    
    std::cout << "Enter your Number: ";
    std::cin >> number;
    
    if(!(std::cin) || number < 1)
    {
        std::cerr << "Please provide valid input!\n";
        return 1;
    }
    
    if (prime(number))
    {
        std::cout << number << " is prime!\n";
    }
    else
    {
        std::cout << number << " isn\'t prime!\n";
    }
    
    return 0;
}

#include <iostream>

int main() 
{
    float temparature;
    
    std::cout << "Enter your Temparature in Celsius: ";
    std::cin >> temparature;
    if(!(std::cin))
    {
        std::cerr << "Please provide valid input.\n";
        return 1;
    }
    
    std::cout << temparature << " Celsius is " << 1.8 * temparature + 32 << " Fahrenheit.\n";
    
    return 0;
}

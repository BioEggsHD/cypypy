#include <iostream>
#include <string>
int main() {
    int number;
    int result = 0;
    
    std::cout << "Enter your number: ";
    std::cin >> number;
    
    if(!(std::cin) || number < 0)
    {
        std::cerr << "Please provide valid input!\n";
        return 1;
    }
    
    std::string tostring = std::to_string(number);
    
    for (int i = 0; i < tostring.length(); i++)
    {
        result += tostring[i] - '0';
    }
    
    std::cout << "Sum of digits is " << result << '\n';
    
    return 0;
}

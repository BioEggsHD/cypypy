#include <iostream>

int main()
{
    std::cout << "Enter N: ";
    int n;
    std::cin >> n;
    
    if(!(std::cin) || n < 0)
    {
        std::cerr << "Please enter a positive Number.\n";
        return 1;
    }
    
    int sum = n*(n+1)/2;
    
    std::cout << "Sum of first " << n << " natural numbers is " << sum << '\n';
    return 0;
}

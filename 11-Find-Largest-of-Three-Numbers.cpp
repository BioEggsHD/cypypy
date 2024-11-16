#include <iostream>

int main() {
    int n1,n2,n3;
    
    std::cout << "Enter your Numbers.\nNumber 1: ";
    std::cin >> n1;
    std::cout << "Number 2: ";
    std::cin >> n2;
    std::cout << "Number 3: ";
    std::cin >> n3;
    
    if(!(std::cin))
    {
        std::cerr << "Please provide valid input!\n";
        return 1;
    }
    
    std::cout << "The largest is " << std::max(n1, std::max(n2,n3)) << '\n';
    
    return 0;
}

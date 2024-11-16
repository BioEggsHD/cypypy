#include <iostream>
#include <algorithm>
int main() {
    std::string word;
    
    std::cout << "Enter your string: ";
    std::getline(std::cin, word);
    
    std::string reversed = word;
    std::reverse(reversed.begin(), reversed.end());
    
    if (word == reversed)
    {
        std::cout << word << " is a palindrome!\n";
    }
    else
    {
        std::cout << word << " is not a palindrome!\n";
    }
    return 0;
}

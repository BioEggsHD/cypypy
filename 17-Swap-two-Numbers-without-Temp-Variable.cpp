#include <iostream>

int main() {
    int a = 5, b = 10;

    std::cout << "Before swapping: a = " << a << ", b = " << b << endl;
  
    a = a ^ b;  // a becomes 15 (0101 ^ 1010 = 1111)
    b = a ^ b;  // b becomes 5 (1111 ^ 1010 = 0101)
    a = a ^ b;  // a becomes 10 (1111 ^ 0101 = 1010)

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
    
}

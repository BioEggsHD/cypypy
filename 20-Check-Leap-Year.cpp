#include <iostream>

bool leapYear(int year)
{
    // A leap year is divisible by 4, but if divisible by 100, it must also be divisible by 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main(){
    int year;
    
    std::cout << "Enter year: ";
    std::cin >> year;
    
    if(leapYear(year)) {
        std::cout << year << " is a leap year!" << std::endl;
    } else {
        std::cout << year << " is not a leap year!" << std::endl;
    }

    return 0;
}

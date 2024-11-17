#include <iostream>

int main() 
{
    int range;
    int sum = 0;
    
    std::cout << "Enter Array Size: ";
    std::cin >> range;
    
    if(!(std::cin) || range < 1)
    {
        std::cerr << "Invaild Input!\n";
        return 1;
    }
    
    int* arr = new int[range];
    
    for(int i = 0; i < range; i++)
    {
        int num;
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> num;
        if(!(std::cin))
        {        
            std::cerr << "Invaild Input!\n";
            return 1;
        }
        arr[i] = num;
        sum += num;
    }
    std::cout << "Sum of the Array [ ";
    for(int i = 0; i < range; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "] is " << sum << '\n';
    return 0;
}

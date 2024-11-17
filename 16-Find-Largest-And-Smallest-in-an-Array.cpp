#include <iostream>
#include <climits>

int main()
{
    int range, min = INT_MAX, max = INT_MIN;
    
    std::cout << "Enter Array Size: ";
    std::cin >> range;
    
    if(!(std::cin) || range < 0)
    {
        std::cerr << "Please provide valid Array Size!\n";
        return 1;
    }
    
    int* array = new int[range];
    
    for(int i = 0; i < range; ++i)
    {
        int num;
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> num;
        
        if(!(std::cin))
        {
            std::cerr << "Please only enter integers!\n";
            return 1;
        }
        array[i] = num;
    }
    
    std::cout << "In Array [ ";
    
    for(int i = 0; i < range; i++)
    {
        int element = array[i];
        std::cout << element << " ";
        if (element < min)
        {
            min = element;
        }
        if (element > max)
        {
            max = element;
        }
    }
    std::cout << "], " << max << " is the biggest and " << min << " the smallest. \n";
    
    return 0;
}

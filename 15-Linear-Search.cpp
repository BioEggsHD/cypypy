#include <iostream>

int main()
{
    int element;
    
    int array[] = {1,4,10,20,5,9999};
    
    std::cout << "Enter element to search for: ";
    std::cin >> element;
    
    if(!(std::cin)){std::cerr << "Invalid Input!";return 1;}
    
    for(int i = 0; i < sizeof(array)/4; i++)
    {
        if (array[i] == element)
        {
            std::cout << element << " found at index " << i << "!\n";
            return 0;
        }
    }
    std::cout << "Element not found!\n";
    return 1;
}

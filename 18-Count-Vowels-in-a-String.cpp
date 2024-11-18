#include <iostream>
bool vowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main()
{
    std::string str;
    int vowels = 0;
    
    getline(std::cin, str);
    
    for (int i=0 ;i < str.length(); i++)
    {
        if (vowel(str[i]))
        {
            vowels++;
        }
    }
    
    std::cout << "\""<< str << "\" has " << vowels << " vowels.\n";
    return 0;
}

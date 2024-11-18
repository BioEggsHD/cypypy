#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of terms: ";
    cin >> n;
    
    int first = 0, second = 1;
    
    cout << "Fibonacci Sequence: ";
    
    if (n >= 1) {
        cout << first << " ";
    }
    
    if (n >= 2) {
        cout << second << " ";
    }
    
    for (int i = 3; i <= n; i++) {
        int next = first + second;
        cout << next << " ";
        
        first = second;
        second = next;
    }
    
    cout << endl;
    return 0;
}

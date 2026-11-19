#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    // Check if the number is divisible by 2 with no remainder
    if (number % 2 == 0) {
        cout << number << " is Even." << endl;
    } else {
        cout << number << " is Odd." << endl;
    }
    
    return 0;
}
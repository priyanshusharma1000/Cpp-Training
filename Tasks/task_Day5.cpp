//This file is created by Priyanshu Sharma
#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int x) {
    return x * x;
}

// Inline function to add two numbers
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    cout << "Enter a number to find its square: ";
    cin >> num1;
    cout << "Square of " << num1 << " is: " << square(num1) << endl;

    cout << "\nEnter two numbers to add: ";
    cin >> num1 >> num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;

    return 0;
}

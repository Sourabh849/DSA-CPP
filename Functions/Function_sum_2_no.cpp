#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
double sum(double a, double b) {
    return a + b;
}


// min of two numbers
double min(double a, double b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    cout << sum(20.345, 305.65) << endl; // Directly calling the function
    cout<< sum(5, 10) << endl; // Directly calling the function in cout
    double a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    double result = sum(a, b);
    cout << "The sum of " << a << " and " << b << " is: " << result << endl;
    
    double result1 = min(a, b);
    cout << "The minimum of " << a << " and " << b << " is: " << result1  << endl;


    
    return 0;
}


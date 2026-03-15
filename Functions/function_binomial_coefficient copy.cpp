#include <iostream>
using namespace std;

int factorial(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int binomialCoefficient(int n, int r) {
    int factorial_n = factorial(n);
    int factorial_r = factorial(r);
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter a number n: ";
    cin >> n;
    
    cout << "Enter a number r: ";
    cin >> r;
    
    if (r > n) {
        cout << "Error: r cannot be greater than n." << endl;
        return 1; // Exit the program with an error code
    }
    
    
    cout << factorial(n) << endl << factorial(r) << endl; // Directly calling the function in cout
    int result =  binomialCoefficient(n , r);
    cout << "binomialCoefficient(n , r) : " << result << endl;
    
    return 0;
}
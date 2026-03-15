#include <iostream>
using namespace std;


int factorial(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
        cout << i ;
        if(i < n) {
        cout << " * ";
        }
        
    }
    cout << " = ";  
    return factorial;
}
int main() {
    int n;
    cout << "Enter a number: ";     
    cin >> n;
    cout << factorial(n) << endl; // Directly calling the function in cout
    
    return 0;
}
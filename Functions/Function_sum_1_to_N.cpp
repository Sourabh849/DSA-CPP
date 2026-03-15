#include <iostream>
using namespace std;

int sum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
        
    }
    return sum;

}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

   
    cout << "The sum of numbers from 1 to " << n << " is: " << sum(n) << endl;
    cout << "The sum of numbers from 1 to " << n << " is: " << sum(10) << endl;
    
    return 0;
}
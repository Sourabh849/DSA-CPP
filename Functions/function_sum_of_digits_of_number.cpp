#include <iostream>
using namespace std;


int sumOfDigits(int n) {
   int digitSum = 0;
   while(n > 0) {
       digitSum += n % 10; // Add the last digit to the sum
       n /= 10; // Remove the last digit
   }
    return digitSum;
}           
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "sum  = " << sumOfDigits(n) <<endl; // Output the result
    
    return 0;
}
#include <iostream>
using namespace std;


int gcd(int a , int b) {
    
    
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
}

   int gcdRec(int a , int b) {      // using recursion
    if(b == 0) return a;

    return gcdRec(b , a % b);

}   

int lcm(int a , int b) {        // LCM
    int gcd = gcdRec(a , b);
    return (a * b) / gcd;
}
int main() {
     int a;

    cout << "enter the number a : ";
    cin >> a;

    int b;

    cout << "enter the number b : ";
    cin >> b;


    cout << gcd(a , b) << endl;
     cout << gcdRec(a , b) << endl;
    cout << lcm(a , b) << endl;

    return 0;
} 
#include <iostream>
using namespace std;


int gcd(int a , int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;

    int gcd = 1;
    for(int i = 1; i < min(a , b); i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}
int main() {
     int a;

    cout << "enter the number a : ";
    cin >> a;

    int b;

    cout << "enter the number b : ";
    cin >> b;


    cout << gcd(a , b) << endl;

    return 0;
}
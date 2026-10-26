#include <iostream>
using namespace std;

int factorial(int rem){
    int fact = 1;
    for(int i = 1; i <= rem; i++) {
        fact *= i;

    }
    return fact;
}

bool isStrong(int n) {
    int sum = 0;
    int original = n;
    while(n > 0){
        int rem = n % 10;
        sum+= factorial(rem);
        n/=10;

    }
    if(sum == original) {
        return true;
    }
    return false;
}
int main() {
    int n;
    cout << "n:";
    cin >> n;

    if(isStrong(n)){
        cout << "Strong";
    }else {
        cout << "Not Strong";
    }

    return 0;
}
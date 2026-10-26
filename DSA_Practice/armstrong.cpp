#include <iostream>
using namespace std;
int countN(int n) {
    int count = 0;
    while(n > 0) {
        count++;
        n/=10;
    }
    return count;
}
bool isArm(int n ) {
    int original = n;
    int sum = 0;
    int count = countN(n);
    
    while(n > 0) {
        int rem = n % 10;
        int prod = 1;
        for(int i = 0; i < count; i++) {
            prod *= rem;
        }
        sum += prod;
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

    int result = isArm(n);
    cout << result;
    return 0;
}
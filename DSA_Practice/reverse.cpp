#include <iostream>
using namespace std;

int reverse(int n) {
    int sign = (n<0) ? -1 : 1;
    n=abs(n);
    int sum = 0;
    while(n>0) {
        int rem = n % 10;
        sum = sum * 10 + rem;
        n/=10;
    }
    return sign * sum;
}
int main() {
    int n;
    cout << "n:";
    cin >> n;

    int result = reverse(n);
    cout << result;
    return 0;
}
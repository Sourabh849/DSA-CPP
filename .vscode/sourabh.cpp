#include <iostream>
using namespace std;

int sum(int n) {
    int digitSum = 0;
    while(n > 0) {
        digitSum += n % 10;
        n/= 10;
    }
    return digitSum;
}
int main() {
    int n;
    cin >> n;

    cout << sum(n);
    return 0;
}
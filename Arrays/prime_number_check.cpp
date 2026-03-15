#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = false;
                break; // No need to continue checking
            }
        }
    }

    if (isPrime) {
        cout << "prime";
    } else {
        cout << "nonPrime";
    }

    return 0;
}
 
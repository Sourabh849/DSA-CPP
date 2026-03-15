#include <iostream>
using namespace std;


int fibonacci(int n) {
    if(n <= 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int previous = 0;
    int current = 1;
    int next;

    for(int i = 2; i <= n; i++) {
    next = previous + current;
    previous = current;
    current = next;
    }
    return current;
}
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << fibonacci(n);
    return 0;
}

/*#include <iostream>
using namespace std;

void printFibonacciUpToN(int n) {
    int a = 0, b = 1;  
    cout << "Fibonacci numbers up to position " << n << ": ";

    for (int i = 0; i <= n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter how many Fibonacci numbers to print: ";
    cin >> n;

    printFibonacciUpToN(n);

    return 0;
}
*/
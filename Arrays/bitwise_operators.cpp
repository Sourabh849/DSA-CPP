#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 7;

    cout << (a & b) << endl;
    cout << (6 & 10) << endl;

    cout << (a | b) << endl;
    cout << (6 | 10) << endl;

    cout << (a ^ b) << endl;
    cout << (6 ^ 10) << endl;
    


    cout << (4 << 1) << endl;
    cout << (10 << 2) << endl;


    cout << (10 >> 1) << endl;
    cout << (8   >> 2) << endl;
    return 0;
}
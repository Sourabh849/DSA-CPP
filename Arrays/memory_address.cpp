#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    
    float price = 100.25;
    float *ptr1 = &price;



    cout << &a << endl;

    cout << ptr << endl;
    cout << &ptr << endl;

    cout << ptr1 << endl;
    cout << &ptr1 << endl;
    cout << &price << endl;
    return 0;
}
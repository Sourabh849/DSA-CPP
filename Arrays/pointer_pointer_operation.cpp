#include <iostream>
using namespace std;

int main() {
    

    int *ptr2;             //100
    int *ptr1 = ptr2 + 2;  //108


    cout << ptr1 - ptr2 << endl;  // 2
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    //int a = 15;
   // arr = &a;       // constent h change nahi kar sakte




    //int a = 15, b = 10;// aisa kar sakte h koi error nahi aayega
   // int *ptr = &a;
  //  ptr = &b;

    cout << arr << endl;           // pointer
    cout << *arr << endl;          // 1
    cout << *(arr + 1) << endl;    // 2
    cout << *(arr + 2) << endl;    // 3
    cout << *(arr + 3) << endl;    // 4
    cout << *(arr + 4) << endl;    // 5
    return 0;
}
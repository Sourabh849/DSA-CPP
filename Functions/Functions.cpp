#include <iostream>
using namespace std;

// function defination
int printHello(){
    cout << "Hello, World!" << endl;
    return 3;
}


int main() {
    // function call

    int val = printHello();
    cout << "The value returned by printHello is: " << val << endl;

    cout << printHello() << endl; // Directly calling the function in cout
    return 0;
}
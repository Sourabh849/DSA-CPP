#include <iostream>
using namespace std;

int main() {
    
    int *ptr1;
    int *ptr2;
    //int *ptr2 = ptr1;
 
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << (ptr1 < ptr2) << endl;
  //  cout << (ptr1 == ptr2) << endl;
   //   cout << (ptr1 != ptr2) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
     int marks[5] = {99, 100, 54, 36, 88};
     marks[0] = 101;  // 99 replace with 101

     double price[] = {98.99, 105.67, 30.00};  // 3
     


     cout << marks[0] << endl;
     cout << marks[1] << endl;
     cout << marks[2] << endl;
     cout << marks[3] << endl;
     cout << marks[4] << endl;


     cout << marks[5] << endl; // this not possible beyond the size


     

     cout << price[0] << endl;
     cout << price[1] << endl;
     cout << price[2] << endl;

    return 0;
}
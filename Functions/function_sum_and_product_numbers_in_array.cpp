#include <iostream>
using namespace std;


    int sumAndProduct(int arr[], int sz) {
        int sum = 0;
        int product = 1;
        for(int i = 0; i <= sz; i++) {

            sum = sum + arr[i];
            product = product * arr[i];
        }
        cout << "sum of elements of arrays : " << sum << endl;
        cout << "product of elements of arrays : " << product << endl;
         
    }
int main() {
    int arr[] = {2, 3, 4, 5};
    int sz = 3;

    sumAndProduct(arr, sz);



    return 0;
}
#include <iostream>
using namespace std;


int binaryToDec(int biNum) {
    int ans = 0, pow = 1; // 2^0
    while(biNum > 0) {
        int rem = biNum % 10;
        ans += rem * pow;

        biNum /= 10;
        pow *= 2;

    }
    return ans;

}
int main() {
    int biNum;
    cout << "Enter the number : ";
    cin >> biNum;

    cout << binaryToDec(biNum) << endl;;


    
    return 0;
}    
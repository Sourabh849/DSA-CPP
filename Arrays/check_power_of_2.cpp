#include <iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    
    if(n > 0 && (n & (n - 1)) == 0) {
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}


/*#include <iostream>
using namespace std;


 bool isPowerOfTwo(int n) {
    if(n <= 0){
        return false;
    }
    for(int i = 1; i <=n; i *= 2){
        if(i == n){
            return true;
        }
    }
    return false;
 }
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(isPowerOfTwo(n)) {
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}*/


/*bool isPowerOfTwo(int n) {
    if (n <= 0) return false;

    for (int i = 0; (1 << i) <= n; i++) {
        if ((1 << i) == n) {
            return true;
        }
    }
    return false;
}
*/


/*bool isPowerOfTwo(int n) {
    if (n <= 0) return false;

    while (n > 1) {
        if (n % 2 != 0) return false;
        n = n >> 1; // divide by 2
    }
    return true;
}
*/
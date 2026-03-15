#include <iostream>
using namespace std;


int revInt(int n) {
    int ans = 0;
    while(n != 0){
    int rem = n % 10;
    ans = ans * 10 + rem;
    n = n / 10;
}
    return ans;
}
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int result = revInt(n);

    cout << n << endl;
    cout << result;

    return 0;
}
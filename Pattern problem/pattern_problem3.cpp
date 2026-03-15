#include <iostream>
using namespace std;

int main() {
    int n;
    int m = 1;
    cout << "Enter the number of lines: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
    for(int j  = 1; j <= n; j++) {
        cout << m << " ";
        m = m + 1;
    }

    cout << endl;
}
    
    return 0;
}

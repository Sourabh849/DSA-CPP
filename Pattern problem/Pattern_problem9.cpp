#include <iostream>
using namespace std;

int main() {
    int n;
    int m = 1; 
    cout << "Enter the number of lines: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
    for(int j  =  1; j <= i + 1; j++) {
        cout << m << " ";
        m = m + 1;
       
    }
    cout << endl; 
}
    
    return 0;
}

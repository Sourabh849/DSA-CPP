#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        } 
        
        for(int space = 0; space < 2 * (n - i) - 2; space++) {
            cout << " ";  // Print spaces between stars
        }
        for(int j = 0; j <= i; j++) {
            cout << "*";  // Print the last star of the row

        } 
        cout << endl;
    }



    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";  // Print the first star of the last row
        }
        for(int space = 0; space < 2 * (n - i); space++) {
            cout << " ";  // Print spaces between stars in the last row
        }
        for(int j = 1; j <= i; j++) {
            cout << "*";  // Print the last star of the last row
        }
    cout << endl;
    }
    return 0;
}
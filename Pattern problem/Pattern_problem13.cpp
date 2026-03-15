#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int space = 0; space < i; space++) {
            cout << " ";
        }

        // Print characters
        char ch = 'a' + i;
        for (int j = 0; j < n - i; j++) {
            cout << ch;  
        }

        cout << endl;
    }

    return 0;
}

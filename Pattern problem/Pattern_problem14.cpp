 #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {       // for(int i = 0; i < n; i++) 
        // Print spaces
        for(int space = 0; space < n - i; space++) {     //for(int space = 0; space < n - i - 1; space++)
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {                  // for(int j = 1; j <= i + 1; j++)
            cout << j;  
        }
        for(int j = i - 1; j >= 1; j--) {               // for(int j = i; j > 0; j--)
            cout << j;  
        }

        cout << endl;
    }

    return 0;
}

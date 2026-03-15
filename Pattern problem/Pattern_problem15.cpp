 #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {      
        for(int space = 0; space < n - i - 1; space++) {    
            cout << " ";
        }
        cout << "*";  // Print the first star

        if(i != 0){
            for(int j = 0; j < 2 * i - 1; j++) { 
                cout << " ";  // Print spaces between stars
            }
            cout << "*";  
        }

        cout << endl;
    }

    for(int i = 0; i < n - 1; i++) {
         for(int space = 0; space < i + 1; space++) {
            cout << " ";  // Print spaces before the last row
    }

    cout << "*";  // Print the last row star
    if(i != n - 2) {
        for(int j = 0; j < 2 * (n - i) - 5; j++) {
            cout << " ";  // Print spaces between stars in the last row
        }
        cout << "*";  
    }
    cout << endl;
}

    return 0;
    }

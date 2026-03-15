/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        char ch = 'A';
    for(int j  = 1; j <= n; j++) {
        cout << ch << " ";
        ch = ch + 1;
    }

    cout << endl;
}
    
    return 0;
}*/

 #include <iostream>
using namespace std;

int main() {
    int n;
    char ch = 'A';
    cout << "Enter the number of lines: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
    for(int j  = 1; j <= n; j++) {
        cout << ch << " ";
        ch = ch + 1;
    }

    cout << endl;
}
    
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int matrix[10][10];
    
    int rows;
    cout << "Enter the rows :";
    cin >> rows;


    int cols;
    cout << "Enter the cols :";
    cin >> cols;
    
    cout << "enter element of matrix :"; 
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];

        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

        return 0;
}
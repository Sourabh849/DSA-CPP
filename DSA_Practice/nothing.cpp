#include <iostream>
#include <climits>
using namespace std;

int (int mat[][3] , int row , int col) {
    
    
}
int main() {
    int row;
    cout << "Enter rows: ";
    cin >> row;
    
    int col;
    cout << "Enter cols: ";
    cin >> col;
    
    int mat[4][3];
    cout << "Enter matrix :" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

            cout << "maxRowSum = " << maxRowSum(mat , row , col);
    return 0;
}
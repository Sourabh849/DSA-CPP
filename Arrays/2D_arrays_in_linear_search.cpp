#include <iostream>
using namespace std;


int linearSearch(int mat[][3] , int rows , int cols , int key) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == key) {
                cout << i << j << endl;
            }
        }
    }
    
}
int main() {
    int matrix[4][3] = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9} , {10, 11, 12}};     // 2D arrays
    int rows = 4;
    int cols = 3;

    linearSearch(matrix , rows , cols , 8);
    
        return 0;
}
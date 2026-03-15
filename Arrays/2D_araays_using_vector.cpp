#include <iostream>
#include <vector>
#include <utility>

using namespace std;


pair<int , int> linearSearch(int mat[][3] , int rows , int cols , int key) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == key) {
                return {i , j};
            }
        }
    }
    return {-1 , -1};
}
int main() {
   int matrix[4][3]  = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9} , {10, 11, 12}};     // 2D arrays
    int rows = 4;
    int cols = 3;

    pair<int, int> result = linearSearch(matrix, rows, cols, 8);

    if (result.first != -1) {
        cout << "Key found at position: (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Key not found." << endl;
    }

    
        return 0;
}
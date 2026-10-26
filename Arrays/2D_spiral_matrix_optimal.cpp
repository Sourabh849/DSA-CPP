#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(vector<vector<int>> mat , int m , int n) {
    int left = 0;
    int right = n-1;
    int top = 0;
    int bottom = m-1;

    while(top <= bottom && left <= right) {

        for(int j = left; j <= right; j++) {
            cout << mat[top][j] << " ";
        }
        top++;

    for(int i = top; i <= bottom; i++) {
        cout << mat[i][right] << " ";
    }
    right--;
    
    if(top <= bottom) {

        for(int j = right; j >= left; j--) {
            cout << mat[bottom][j] << " ";
        }
        bottom--;
    }
    
    if(left <= right) {
        for(int i = bottom; i >= top; i--) {
            cout << mat[i][left] << " "; 
        }
        left++;
    }
}
}

    int main() {
    vector<vector<int>> mat =  {{1, 2, 3} , {4, 5, 6} , {7, 8, 9}};   // 3X3
   int m = 3;
   int n = 3;
    
    
  spiralMatrix(mat , m , n);
  
   
      
    return 0;
}
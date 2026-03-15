#include <iostream>
#include <vector>
#include <climits>


using namespace std;
 

int getDiagonalSum(int mat[][3] , int n) {     // O(n^2)
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j){
                sum += mat[i][j];
            } else if(j == n - 1 - i){
                sum += mat[i][j];
            }
        }
       
    }
    return sum ;
}

/*int getDiagonalSum(int mat[][3] , int n) {     // O(n)
    int sum = 0;
    // pd = i
    // sd = n - i - 1;
    for(int i = 0; i < n; i++) {
        sum += mat[i][i];
        
        if(i != n - i - 1) {
           sum += mat[i][n - i - 1];

       }
    }
    return sum ;
}  */


int main() {
   int matrix[3][3]  = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9}};     // 2D arrays
   int n = 3;

   cout << getDiagonalSum(matrix , n) << endl;
    
        return 0;
}
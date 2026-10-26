#include <iostream>
#include <vector>
using namespace std;

 bool searchMatrix(vector<vector<int>>& mat, int target) {   // O(log n)
        int n = mat[0].size();
        int m = mat.size();
        int st = 0 , end = m*n - 1;

    while(st <= end) {
        int mid = st + (end - st)/2;
        int r = mid/ n;
        int c = mid%n;

        if(mat[r][c] == target) {
            return true;
        }else if(target > mat[r][c]) {
            st = mid+1;
        } else {
            end= mid-1;
        }
    }
    return false;
       
    }




   

    int main() {
    vector<vector<int>> mat =  {{1,3,5,7} , {10,11,16,20} , {23,30,34,60}};   // 3x4
    int tar = 16;
   int row = 3;
   int col = 4;
    
    
 cout << searchMatrix(mat ,  tar);
  
   
      
    return 0;
}
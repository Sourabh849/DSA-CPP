#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>> mat , int row , int col , int tar) {
    int n = mat[0].size();
    int st = 0;
    int end = n-1;
    
    while(st <= end) {
        int mid = st+(end-st)/2;
        if(tar == mat[row][mid]) {
            return true;
        } else if(tar < mat[row][mid]) {
            end = mid-1;
        } else {
            st = mid+1;
        }
    }
    return false;
}

bool findRow(vector<vector<int>> mat , int row , int col , int tar) {
    int m = mat.size();
    int n = mat[0].size();

    int srow = 0 , erow = m-1;

    while(srow <= erow) {
        int midr = srow + (erow-srow)/2;
        if(tar >= mat[midr][0] && tar <= mat[midr][n-1]) {
            return binarySearch(mat , midr , col , tar);
        } else if(tar >= mat[midr][n-1]) {
            srow = midr+1;
        } else {
            erow = midr-1;
        }
    }
    
    return false;
}


   

    int main() {
    vector<vector<int>> mat =  {{1,3,5,7} , {10,11,16,20} , {23,30,34,60}};   // 3x4
    int tar = 16;
   int row = 3;
   int col = 4;
    
    
 cout << findRow(mat , row , col , tar);
  
   
      
    return 0;
}
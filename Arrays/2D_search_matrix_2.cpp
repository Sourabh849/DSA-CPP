#include <iostream>
#include <vector>
using namespace std;
 bool searchMatrix(vector<vector<int>>& mat, int tar) {   // O(log n)
    int m = mat.size();
    int n = mat[0].size();
        int st = 0 , end = n - 1;

    while(st < m && end >= 0) {       
        if(tar > mat[st][end]) {
            st++; 
          
        } else if(tar < mat[st][end]) {
            end--;
          
        } else {
            return true;
        }
    }
    return false;
 }
    int main() {
    vector<vector<int>> mat =  {{1,4,7,11} , {2,5,8,12} ,{3,6,9,16},  {10,13,14,17}};   // 3x4
    int tar = 11;   
 cout << searchMatrix(mat ,   tar);   
    return 0;
}
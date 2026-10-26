#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 vector<vector<int>> rotateImage(vector<vector<int>> mat) {   // O(log n)
    int m = mat.size();
    int n = mat[0].size();
       
    for(int i = 0; i < m; i++) {
        for(int j = i+1; j < n; j++) {
            swap(mat[i][j] , mat[j][i]);
        }
    }
    for(int i = 0; i < m; i++) {
        int st = 0 , end = n-1;
        while(st < end) {
            swap(mat[i][st] , mat[i][end]);
            st++;
            end--;
        }
    }
   return {mat};
 }
    int main() {
    vector<vector<int>> mat =  {{1,2,3} , {4,5,6} ,{7,8,9}};   // 3x4   
  mat = rotateImage(mat); 
  
  for(int i = 0; i < mat.size(); i++) {
    for(int j = 0; j < mat[0].size(); j++) {
        cout << mat[i][j] << " ";
    }
    cout << endl;
  }
    return 0;
}
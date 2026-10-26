#include <iostream>
#include <vector>
using namespace std;

    void markrow(vector<vector<int>> &mat , int row , int col) {
        for(int j = 0; j < mat[0].size(); j++) {
            if(mat[row][j] != 0) {
                mat[row][j] = -1;
            }
        }

    }
    void markcol(vector<vector<int>> &mat , int row , int col) {
        for(int i = 0; i < mat.size(); i++) {
            if(mat[i][col] != 0) {
                mat[i][col] = -1;
            }
        }
    }
    int main() {
    vector<vector<int>> mat =  {{1, 2, 3} , {4, 0, 6} , {7, 8, 9}};   // 3X3
    int row = 3;
    int col = 3;
    
    // rows = mat.size();
   // cols = 1 row kitne element
    //cout << mat[0][0];
    
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            if(mat[i][j] == 0) {
               markrow(mat , i , j);
               markcol(mat , i , j);
        }
    }
}
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            if(mat[i][j] == -1) {
              mat[i][j] = 0;
    }
}
    }
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
}
cout << endl;
    }


    
    return 0;
}
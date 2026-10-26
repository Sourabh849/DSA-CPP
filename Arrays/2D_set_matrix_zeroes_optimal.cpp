#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> setMatrix(vector<vector<int>> mat , int row , int col) {
    int col0 = 1;
    for(int i = 0; i < mat.size(); i++) {
        if(mat[i][0] == 0) {
            col0 = 0;
        }
        for(int j = 1; j < mat[i].size(); j++) {
            if(mat[i][j] == 0) {
               mat[i][0] = 0;
               mat[0][j] = 0;
            }
        }
    }  
    for(int i = 1; i < mat.size(); i++) {
        for(int j = 1; j < mat[i].size(); j++) {
            if(mat[i][0] == 0 || mat[0][j] == 0) {
                mat[i][j] = 0;
            }
    }
    }
    if(mat[0][0] == 0) {
        for(int j = 0; j < mat[0].size(); j++) {
            mat[0][j] = 0;
        }
    } 
    if(col0 == 0) {
        for(int i = 0; i < mat.size(); i++) {
            mat[i][0] = 0;
        }
    }
    return {mat};
}
    int main() {
    vector<vector<int>> mat =  {{0, 2, 3} , {4, 0, 6} , {7, 8, 9}};   // 3X3
   int row = 3;
   int col = 3; 
  mat = setMatrix(mat , row , col);
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
}
cout << endl;
    }   
    return 0;
}
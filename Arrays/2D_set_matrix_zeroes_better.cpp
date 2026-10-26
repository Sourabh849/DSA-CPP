#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> setMatrix(vector<vector<int>> mat , int row , int col) {
    vector<int> rowArr(row , 0);
    vector<int> colArr(col , 0);
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            if(mat[i][j] == 0) {
                rowArr[i] = 1;
                colArr[j] = 1;
            }
        }
    }
    
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            if(rowArr[i] == 1 || colArr[j] == 1) {
              mat[i][j] = 0;
    }
    }
    }

    return {mat};
}

    int main() {
    vector<vector<int>> mat =  {{1, 2, 3} , {4, 0, 6} , {7, 8, 9}};   // 3X3
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
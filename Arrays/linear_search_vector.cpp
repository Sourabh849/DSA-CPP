#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> linearSearch = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    int target = 5;
    int index = -1;
    for(int i = 0; i < linearSearch.size(); i++) {
        if(linearSearch[i] == target){
            index = i;
        }
    }
    cout << index << endl;

    
return 0;
}
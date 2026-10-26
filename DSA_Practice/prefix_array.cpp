#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

 vector<int> prefix(vector<int> &arr) {
    vector<int> v;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        v.push_back(sum);
    }
    return v;
 }
int main() {
vector<int> arr = {2,4,1,3,5};
vector<int> v = prefix(arr);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
   
    return 0;
    }                                                               







    
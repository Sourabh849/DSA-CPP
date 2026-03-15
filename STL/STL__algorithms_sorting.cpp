#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool comparator(pair<int , int> p1 , pair<int , int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    
    if(p1.first < p2.first ) return true;
    else return false;
    
}
int main() {
    int arr[5] = {3, 5, 1, 8, 2};
    sort(arr , arr + 5);
      for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;
      
    vector <int> vec = {3, 5, 1, 8, 2};
    
    sort(vec.begin(), vec.end());
    sort(arr , arr + 5 , greater<int>());
    
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    
    for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    
    
    
    vector<pair<int , int>> vec1 = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
    sort(vec1.begin(), vec1.end());

     for(auto p : vec1) {
        cout << p.first << " " << p.second << endl;  
    }

     vector<pair<int , int>> vec2 = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
    sort(vec2.begin(), vec2.end() , comparator);

     for(auto p : vec2) {
        cout << p.first << " " << p.second << endl;  
    }
   
  return 0;
}
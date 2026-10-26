#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <climits>
using namespace std;
int move(int arr[] , int n) {

    unordered_set<int> s;
    for(int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }


    int large = 0;  
    int current;
    int count;                                                                                                                                                                      
   
    for(int i = 0; i < n; i++) {

        if(s.find(arr[i] - 1) == s.end()) {
            current = arr[i];
            count = 1;
            while(s.find(current+1) != s.end()) {
               current++;
            count++;
            }
            large = max(large , count);
        }

    }   
   
    

cout << "large = " << large << endl;
  return 0;
}
int main() {

    int n;
    cout << "Enter n:";
    cin >> n;
    int arr[n];
    cout << "Enter arry:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    move(arr , n); 
  
    return 0;
}
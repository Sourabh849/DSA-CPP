#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <climits>
using namespace std;
int move(int arr[] , int n) {
  
   int max = INT_MIN;
   int max1 = INT_MIN;
   int max2 = INT_MIN;
  
    for(int i = 0; i < n; i++) {
       if(arr[i] > max) {
        max2 = max1;
        max1 = max;
        max = arr[i];
       } else if(arr[i] < max && arr[i] > max1) {
        max2 = max1;
        max1 = arr[i];
       } else if(arr[i] < max1 && arr[i] > max2){
        max2 = arr[i];
       }

    }
       cout << "max = " << max << endl;
       cout << "max1 = " << max1 << endl;
       cout << "max2 = " << max2 << endl;
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
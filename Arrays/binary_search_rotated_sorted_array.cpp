#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr , int n , int tar) {
    int st = 0 , end = n-1;
    while(st <= end) {
        int mid = st + (end-st)/2;
        if(tar == arr[mid]) {
            return mid;
        }
        if(arr[st] <= arr[mid]) {

            if(tar >= arr[st] && tar < arr[mid]) {
                end = mid-1;
            } else {
                st = mid+1;
            }
        } else {
            if(arr[mid] <= tar && tar <= arr[end]) {
                st = mid+1;
            } else {
                end = mid-1;
            }
        }
    } 
   return -1;  
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter vector: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int tar;
    cout << "Enter target : ";
    cin >> tar;

    cout << "mid = " << search(arr , n, tar);

    
    // for(int x: v) {
    //     cout << x << " ";
    // }
    // cout << endl;
    return 0;
}
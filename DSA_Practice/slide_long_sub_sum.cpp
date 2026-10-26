#include<iostream>
#include<unordered_map>
using namespace std;
 int subArr(int arr[], int n, int k) {
     int maxlen = 0;
     int sum = 0;
     int left = 0;
     for(int i = 0; i < n; i++) {
        sum += arr[i];
        
       while(sum > k) {
        sum -= arr[left];
        left++;
       }
       maxlen = max(maxlen , i-left+1);
     }
}
int main() {
    int k;
    cout << "Enter target:";
    cin >> k;

    int n;
    cout << "n:";
    cin >> n;

    int arr[n];
    cout << "Enter array:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = subArr(arr, n, k);
    cout << "maxlen = " << result;
    return 0;
}
#include<iostream>
#include<unordered_map>
using namespace std;
 int subArr(int arr[], int n, int target) {
     unordered_map<int,int> m;
    int sum = 0, maxlen = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];

        if(sum == target) {
            maxlen = i + 1;
        }

        if(m.find(sum - target) != m.end()) {
            int len = i - m[sum - target];
            maxlen = max(maxlen , len);
        }

        if(m.find(sum) == m.end()) {
            m[sum] = i;
        }
      }
      return maxlen;  
}
int main() {
    int target;
    cout << "Enter target:";
    cin >> target;

    int n;
    cout << "n:";
    cin >> n;

    int arr[n];
    cout << "Enter array:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = subArr(arr, n, target);
    cout << "maxlen = " << result;
    return 0;
}
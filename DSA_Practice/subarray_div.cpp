#include<iostream>
#include<unordered_map>
using namespace std;
 int subArr(int arr[], int n, int k) {
    unordered_map<int,int> m;
     int count = 0;
     int sum = 0;
     for(int i = 0; i < n; i++) {
        sum += arr[i];
        int rem = (sum % k + k) % k;
        if(rem == 0) {
            count++;
        }
        
        if(m.find(rem) != m.end()) {
            count += m[rem];
        }
        m[rem]++;
     }
     return count;
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
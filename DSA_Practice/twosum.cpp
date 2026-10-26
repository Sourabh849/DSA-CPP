#include<iostream>
#include<unordered_map>
using namespace std;

 pair<int, int> twoSum(int arr[], int n, int target) {
    unordered_map<int,int> m;
    for(int i = 0; i < n; i++) {
        int need = target - arr[i];
        if(m.find(need) != m.end()) {
            return {m[need] , i};
        }
        m[arr[i]] = i;
    }
    return {-1,-1};
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

    pair<int,int> result = twoSum(arr, n, target);
    cout << result.first << " " << result.second;
    return 0;
}
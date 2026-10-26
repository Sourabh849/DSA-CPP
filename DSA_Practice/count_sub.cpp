#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int countSub(vector<int> arr , int k) {
    int count = 0;
    int sum = 0;
    unordered_map<int,int> m;
    m[0] = 1;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if(sum == k) count++;

        if(m.find(sum - k) != m.end()) {
            count = count + m[sum-k];
        }

        if(m.find(sum) == m.end()) {
            m[sum]++;
        }
    }
    return count;
}
 
int main() {
vector<int> arr = {1,1,1};
int k = 2;

int result = countSub(arr , k);
cout << result;

   
    return 0;
    }                                                               




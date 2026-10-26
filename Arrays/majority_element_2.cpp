#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;


vector<int> majorityElement(vector<int> nums) {
    int n = nums.size();
    unordered_map<int,int> m;
    vector<int> ans;
    
    for(int i = 0; i < n; i++) {      
            m[nums[i]]++;               
    }

   for(auto x : m) {

       if(x.second > n/3) {
           ans.push_back(x.first);
       }
   }

    return ans;
}
int main() {
    vector<int> nums = {1,1,1,3,3,2,2,2};
    vector<int> s = majorityElement(nums);
    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << endl;
    }

    
    
    return 0;
} 
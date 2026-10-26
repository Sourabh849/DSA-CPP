#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;
vector<int> majorityElement(vector<int> nums) {
    vector<int> ans;
    int n = nums.size();
   int ans1 = 0;
   int ans2 = 0;
   int count1 = 0;
   int count2 = 0;
   for(int i = 0; i < n; i++) {
       if(nums[i] == ans1){
           count1++;
       } else if(nums[i] == ans2) {
           count2++;
       } else if(count1 == 0) {
               ans1 = nums[i];
               count1 = 1;
            }
            else if(count2 == 0 && nums[i] != ans1) {
                ans2 = nums[i];
                count2 = 1;
            }
         else {
            count1--;
            count2--;  }  }
    count1 = 0;
    count2 = 0;
   for(int i= 0; i < n; i++) {
    if(nums[i] == ans1) {
        count1++;
    }else if(nums[i] == ans2) {
        count2++; }   }
   if(count1 > n/3) {
    ans.push_back(ans1);
   }
   if(count2 > n/3) {
    ans.push_back(ans2); }
   return ans;}
int main() {
    vector<int> nums = {1,1,1,3,3,2,2,2};
    vector<int> ans = majorityElement(nums);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }  
    return 0;
} 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> majorityElement(vector<int> nums) {
   int n = nums.size();
   
   // sort
   sort(nums.begin(), nums.end());

    // frequency count 
     int frequency = 1, ans = nums[0];
     for(int i = 1; i < n; i++) {
         if(nums[i] == nums[i - 1]) {
            frequency++;
         }
         else{
            frequency = 1;
            ans = nums[i];
         }
         if(frequency > n / 2) {
             return {ans};
            }
     }
}
int main() {
    vector<int> arr = {1, 2, 2,2, 2, 2, 2, 1, 1,  1, 1};
    vector<int> ans = majorityElement(arr);


    cout << ans[0] << endl;
    return 0;
} 
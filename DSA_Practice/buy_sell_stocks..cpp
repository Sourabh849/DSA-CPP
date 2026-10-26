#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


vector<int> majorityElement(vector<int> nums) {
   int n = nums.size();
   
  int profit;
  int minimum = nums[0];
  int large = 0;
  for(int i = 1; i < n; i++) {
    if(nums[i] < minimum) {
        minimum = nums[i];
    } else {
        profit = nums[i] - minimum;
        large = max(large , profit);
    }
  }
    
  
      return {large};

}
int main() {
    vector<int> nums = {7,1,5,6,2,3,4};
    vector<int> ans = majorityElement(nums);


    cout << ans[0] << endl;
    return 0;
} 
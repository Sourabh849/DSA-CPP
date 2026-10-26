#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> majorityElement(vector<int> nums) {
   int n = nums.size();
  
   // sort
   sort(nums.begin(), nums.end());

  cout << nums[n/2];
}
int main() {
    vector<int> arr = {1, 2, 2,2, 2, 2, 2, 1, 1,  1, 1};
    vector<int> ans = majorityElement(arr);


   
    return 0;
} 
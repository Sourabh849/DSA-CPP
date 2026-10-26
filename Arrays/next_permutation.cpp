#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


vector<int> majorityElement(vector<int> nums) {
   int n = nums.size();
   int pivot=-1;
   for(int i = n-2; i >= 0; i--) {
    if(nums[i] < nums[i+1]) {
        pivot = i;
        break;
    }
   }

   if(pivot == -1) {
    reverse(nums.begin() , nums.end());
    return nums;
   }

   for(int i = n-1; i > pivot; i--) {
    if(nums[i] > nums[pivot]) {
        swap(nums[i] , nums[pivot]);
        break;
    }
   }
   int i = pivot+1 , j = n-1;
   while(i < j) {
    swap(nums[i++] , nums[j--]);
   }
 
   return nums;
}
int main() {
    vector<int> nums = {1,2,3};
    vector<int> ans = majorityElement(nums);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    
    return 0;
} 

#include <iostream>
#include <vector>
using namespace std;


vector<int> majorityElement(vector<int> nums) {
   int n = nums.size();
   int frequency = 0, ans = 0;
   for(int i = 0; i < n; i++) {
    if(frequency == 0) {
        ans = nums[i];
    }
    else if(ans == nums[i]) {
        frequency++;
    }                                                                                                   
    else{
        frequency--;
    }
    
   }
   int count = 0;                               // ye count vala nahi likha to chalega isliye kyoki sab 1 1 he aa gaye to majority me koi nhi hoga
   for(int val : nums) {
    if(val == ans) {
        count++;  
    }
   }
   if(count > n / 2) {
       return {ans};
   }
   else{
    return {-1};
   }
}
int main() {
    vector<int> arr = {1, 2, 2, 1, 1,  1, 1};
    vector<int> ans = majorityElement(arr);


    cout << ans[0] << endl;
    return 0;
}
/*#include <iostream>
#include <vector>
using namespace std;


vector<int> majorityElement(vector<int> nums) {
   
    int n = nums.size();
    
    for(int i = 0; i <  n; i++) {
       int count = 0;
    for(int j = 0; j < n; j++) {
        if(nums[i] == nums[j]) {
            count++;
        }
    }
    if(count > n / 2) {
        return {nums[i]};
   }
   }
   return {};
}
int main() {
    vector<int> arr = {1, 2, 2, 2, 2, 2, 2, 2, 1, 1};
    vector<int> ans = majorityElement(arr);


    cout << ans[0] << endl;
    return 0;
}*/

#include <iostream>
#include <vector>
using namespace std;


vector<int> majorityElement(vector<int> nums) {
   int n = nums.size();
    for(int val : nums) {
        int frequency = 0;
        for(int element : nums) {
            if(element == val) {
                frequency++;
            }
        }
        if(frequency > n / 2) {
            return {val};
        }
    }
}
int main() {
    vector<int> arr = {1, 2, 2, 1, 1,  1, 1};
    vector<int> ans = majorityElement(arr);


    cout << ans[0] << endl;
    return 0;
}
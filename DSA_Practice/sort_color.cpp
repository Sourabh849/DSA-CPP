#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


vector<int> majorityElement(vector<int> nums) {
   int n = nums.size();
   int count0 = 0;
   int count1 = 0;
   int count2 = 0;
 for(int i = 0; i < n; i++) {
    if(nums[i] == 0) {
        count0++;
    } else
    if(nums[i] == 1) {
        count1++;
    } else {
        count2++;
    }   
 }

 for(int i = 0; i < count0; i++) {
    cout << "0" << endl;
 }
 for(int i = 0; i < count1; i++) {
    cout << "1" << endl;
 }
 for(int i = 0; i < count2; i++) {
    cout << "2" << endl;
 }

}
int main() {
    vector<int> nums = {2,0,2,1,1,0};
    vector<int> ans = majorityElement(nums);

    
    return 0;
} 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ans = 0;
    vector<int> nums = {4, 1, 2, 1, 2};
    for(int val : nums){
        ans = ans ^ val;
    }
    cout << ans;
    return 0;
}
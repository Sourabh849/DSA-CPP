#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size = 5;
    int nums[size];

    for(int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(nums[i] < smallest){
            smallest = nums[i];

            // smallest = min(nums[i], smallest);
        }  
        if(nums[i] > largest){
            largest = nums[i];

            // largest = max(nums[i], largest);
        }
    }
    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;    

int main() {
    vector<int> vec; // 0
    vector<int> vec1 = {6, 7, 8};
    vector<int> vec2(3 , 10);        // dynamic programming - tabulation DP[][]
    vector<int> vec3(vec2);
    
    
     for(int val : vec1) {
        cout << val << " ";
    }
    cout << endl;

     for(int val : vec2) {
        cout << val << " ";
    }
    cout << endl;

     for(int val : vec3) {
        cout << val << " ";
    }
    cout << endl;


    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    
    vec.emplace_back(6);

    vec.pop_back();


    cout << vec.size() << endl;  // 3
    cout << vec.capacity() << endl;  // 4      // capacity always double

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << "val at idx 2 is " << vec[2] << " or " << vec.at(2) << endl;

    cout << "front = " << vec.front() << endl;
    cout << "back = " << vec.back() << endl;
    return 0;
}
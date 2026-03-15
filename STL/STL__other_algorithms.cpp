#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    vector <int> vec = {1, 2, 3, 4, 5};
    
    reverse(vec.begin(), vec.end());
  //  reverse(vec.begin() + 1, vec.end() + 3);
   
    
    for(auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    string s = "abc";
    string s1 = "bca";
    next_permutation(s.begin() , s.end());
    prev_permutation(s1.begin() , s1.end());

    cout << s << endl;
    cout << s1 << endl;

    cout << max(4, 5) << " " << min(6 , 10) << endl;

    int a = 5, b= 10;

    swap(a , b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;



     vector <int> vec2 = {1, 2, 3, 4, 5};
    
    cout << *(max_element(vec2.begin(), vec2.end())) << endl;
    cout << *(min_element(vec2.begin(), vec2.end())) << endl;
  return 0;
}
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
using namespace std;

int main() {
    set<int> s;
   // multiset<int> s;  // agar multiset rakhege to duplicate bhi aayenge
   // unordered_set<int> s;  // isme sab unique or unordered aayenge
   
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
// agar 4 h to 4 he aayega nahi h to usse just badi value aayegi
    cout << "lower bound = " << *(s.lower_bound(4)) << endl;  // agar 4 se bada koi naa ho to s.end() ki value aayegi end se just aage
    cout << "upper bound = " << *(s.upper_bound(4)) << endl;  // isme agar 4 ka diya h to usse uppar ki he value aayegi
    
    
    
    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout << s.size() << endl;



    // m.erase("tv");

 //  m.erase(m.find("tv"));

   for(auto val : s) {
    cout << val << " ";
   }
   cout << endl;
  return 0;
}
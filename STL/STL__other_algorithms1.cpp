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
    
    cout << binary_search(vec.begin(), vec.end() , 10) << endl;

    int n = 15;
    long int n1 = 15;
    long long int n2 = 15;

    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(n1) << endl;
    cout << __builtin_popcountll(n2) << endl;
  return 0;
}
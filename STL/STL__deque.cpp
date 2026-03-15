#include <iostream>
#include <vector>
#include<list>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    deque<int> d1 = {1, 2, 3};

    for(int val : d1) {
        cout << val << " ";
    }
    cout << endl;
    
    // l.emplace_back(1);    same as next line
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(5);
    
    d.pop_back();
    d.pop_front();
    
    
    for(int val : d) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << d1[2] << endl;

    return 0;
}
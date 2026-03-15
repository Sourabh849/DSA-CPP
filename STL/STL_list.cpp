#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    list<int> l;
    list<int> l1 = {1, 2, 3};

    for(int val : l1) {
        cout << val << " ";
    }
    cout << endl;

   // l.emplace_back(1);    same as next line
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);
    
    l.pop_back();
    l.pop_front();


    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class abc {
    list<int> ll;

public:
    void push(int val) {  // O(1)
        ll.push_front(val);
    }

    void pop() {  // O(1)
        ll.pop_front();
    }

    int top() {  // O(1)
        return ll.front();
    }

    bool empty() {
        return ll.size() == 0;
    }
};
int main() {
    abc l;

    l.push(10);
    l.push(20);
    l.push(30);

    while(!l.empty()) {
        cout << l.top() << " ";
        l.pop();
    }
    cout << endl;
    return 0;
}
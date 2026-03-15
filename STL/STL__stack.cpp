#include <iostream>
#include <vector>
#include<list>
#include <deque>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    
    stack<int> s1;
      s1.swap(s);
    cout << "s size = " << s.size() << endl; // 0
    cout << "s1 size = " << s1.size() << endl;//3

   cout << "Top = " << s1.top() << endl;

    while(!s1.empty()) {
        cout << s1.top() << " ";
        s1 .pop();
    }
    cout << endl;


   
    return 0;
}
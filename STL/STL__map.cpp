#include <iostream>
#include <vector>
#include<list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int main() {
    map<string , int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;         // sab alphabetically print hoyenge lexicographocally   sort(ascending)
    m["tablet"] = 120;
    m["watch"] = 50;


    m.insert({"camera" , 25});
    m.emplace("camera" , 25);

    m.erase("tv");

    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    cout << "count = " << m.count("laptop") << endl;
    cout << "value = " << m["laptop"] << endl;

    if(m.find("camera") != m.end()) {
        cout << "found" << endl;
    } else {
        cout << "not found" << endl; 
    } 
  return 0;
}
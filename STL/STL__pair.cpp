#include <iostream>
#include <vector>
#include<list>
#include <deque>
using namespace std;

int main() {
   pair<int , int> p = {1 , 5};
   pair<string , int> p1 = {"shraddha" , 5};
   pair<int , pair<char , int>> p2 = {1 , {'a' , 3}};

   vector<pair<int , int>> vec = {{1 , 2} , {2 , 3} , {3 , 4}};

   vec.push_back({4 , 5});  // insert  -- agar pehle se pair banaya hua h to push_back use karenge
   vec.emplace_back(4 , 5); // in-place objects create   -- agar pair nahi banaya h to emplace_back use karenge because ye ander se pair bana deta h 

   // for loop me ye pair<int , int> p iski jagah apan auto likh sakte h
   for(pair<int , int> p : vec) {
    cout << p.first << " " << p.second << endl;
   }
   


   cout << p.first << endl;
   cout << p.second << endl;
   cout << p1.first << endl;
   cout << p1.second << endl;
   cout << p2.first << endl;
   cout << p2.second.first << endl;
   cout << p2.second.second << endl;
    return 0;
}
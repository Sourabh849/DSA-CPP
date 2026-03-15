#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec= {6, 7, 8 , 9, 10 , 11 , 12 , 13};
    
    cout << "is empty = " << vec.empty() << endl;
    
    vec.erase(vec.begin());
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    
    vec.erase(vec.begin() + 2);
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    
    
    vec.erase(vec.begin() + 2 , vec.begin() + 4);
     for(int val : vec) {
         cout << val << " ";
        }
        cout << endl;
        
        
        vec.insert(vec.begin() + 2 , 100);
        
        for(int val : vec) {
            cout << val << " ";
        }
        cout << endl;
        
         vec.clear();        // pura vector clear kar dega
        for(int val : vec) {
            cout << val << " ";
        }
        cout << endl;

        cout << "size = " << vec.size() << endl;
        cout << "capacity = " << vec.capacity() << endl;
        
        cout << "is empty = " << vec.empty() << endl;
   
}
    
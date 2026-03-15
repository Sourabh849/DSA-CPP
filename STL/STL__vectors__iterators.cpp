#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int>:: iterator itr;
         // forward loop
    for(itr = vec.begin(); itr != vec.end(); itr++) {
        cout << *(itr) << " ";
    }

    cout << endl;


        // backward loop
    for(auto itr = vec.rbegin(); itr != vec.rend(); itr++) { 
        cout << *(itr) << " ";
    }

    cout << endl;


    cout << "vec.begin : " << *(vec.begin()) << endl;
    
    cout << "vec.end : " << *(vec.end()) << endl;
    return 0;
} 
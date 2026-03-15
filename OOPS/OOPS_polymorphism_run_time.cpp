#include <iostream>
#include <string>
using namespace std;

class parent {
    public:
     getInfo() {
        cout << "parent class"<< endl;
    }

   virtual void hello() {
        cout << "hello from parent\n";
    }
};

class child : public parent {
    public:
     getInfo() {
        cout << "child class"<< endl;
    }

    void hello() {
        cout << "hello from child\n";
    }
};
int main() {
    child c1;
    c1.getInfo();
    c1.hello();

    parent p1;
    p1.getInfo();
    p1.hello();
    return 0;
}

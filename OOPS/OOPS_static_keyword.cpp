#include <iostream>
#include <string>
using namespace std;

void func() {
    // static variable
   static int x = 0;
    cout << x << endl;;
    x++;
}

class A {
    public:
    int x;

    void incX() {
        x = x+1;
    } 
    };


    // static object
    class ABC {
        public:
        ABC() {
            cout << "constructor\n";
        }
        ~ABC() {
            cout << "destructor\n";
        }
    };

int main() {
  func();
  func();
  func();

  A obj1;
  A obj2;
  obj1.x = 100;
  obj2.x = 200;
  cout << obj2.x << endl;
  cout << obj1.x << endl;
  obj1.incX();
  obj2.incX();
  cout << obj1.x << endl;
  cout << obj2.x << endl;



  if(true) {
    static ABC obj;
  }

  cout << "end of main fnx\n";
    return 0;
}

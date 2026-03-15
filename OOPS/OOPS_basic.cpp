#include <iostream>
#include <string>
using namespace std;

    class Teacher {
       private:
       double salary;
        public:
      //properties / attributes
      string name;
      string dept;
      string subject;
      //double salary;
      //methods/member functions
      void changeDept(string newDept) {
        dept = newDept; 
      }
      // setter
      void setSalary(double s) {
        salary = s;
      }
      // getter
      double getSalary() {
        return salary;
      }
    };
int main() {
    Teacher t1;
    t1.name = "Shraddha";
    t1.subject = "C++";
    t1.dept = "Computer science";
    t1.setSalary(25000); 

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
   // Teacher t2;
    //Teacher t3;
    //Teacher t4;
    return 0;
}
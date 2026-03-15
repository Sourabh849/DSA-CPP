#include <iostream>
#include <string>
using namespace std;

    class Teacher {
       private:
       double salary;
        public:
        // Non PARAMETRISED CONSTRUCTOR
      /* Teacher() {
        deept = "Computer science";
       }*/
        // PARAMETRISED CONSTRUCTOR
        Teacher(string n , string d , string s , double sal) {
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }
        // this pointer
        /*Teacher(string name , string dept , string subject , double salary) {
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;*/
            
            // copy constructor
            Teacher(Teacher &orgObj) {   // pass by reference
                this->name = orgObj.name;
                this->dept = orgObj.dept;
                this->subject = orgObj.subject;
                this->salary = orgObj.salary;
            }
            
            //properties / attributes
      string name;
      string dept;
      string subject;
      //double salary;
      //methods/member functions
      void changeDept(string newDept) {
        dept = newDept; 
      }
     /* // setter
      void setSalary(double s) {
        salary = s;
      }
      // getter
      double getSalary() {
        return salary;
      }*/

      void getInfo() {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
      }
    };
int main() {
    Teacher t1("shradha" , "COmputer science" , "C++" , 25000); // constructor call
    //Teacher t2; // constructor call
 //   t1.name = "Shraddha";
  //  t1.subject = "C++";
   // t1.dept = "Computer science";
  //  t1.setSalary(25000); 
       // t1.getInfo();
        Teacher t2(t1);        // default copy constructor - invoke     // custum  copy constructor - invoke
        t2.getInfo( );
   // cout << t1.name << endl;
   // cout << t1.dept << endl;
    //cout << t2.dept << endl;
   // cout << t1.getSalary() << endl;
   // Teacher t2;
    //Teacher t3;
    //Teacher t4;
    return 0;
}
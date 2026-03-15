#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
   // double cgpa;
   double* cgpaPtr;

    Student(string name , double cgpa) {
        this->name = name;
        //this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj) {
        this->name = obj.name;
        cgpaPtr = new double;
        this->cgpaPtr = obj.cgpaPtr;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo() {
        cout << "name : " << name << endl;
      //  cout << "cgpa : " << cgpa << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
    
    
};
int main() {
    Student s1("rahul" , 8.9);
  //  s1.getInfo();
  Student s2(s1);  
  s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.name = "neha";
  s2.getInfo();
    return 0;
}
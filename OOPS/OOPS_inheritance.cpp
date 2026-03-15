#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
    string name;
    int age;

    /*Person(string name , int age) {
        this->name = name;
        rhis->age = age;
    }*/
    Person() {
        cout << "parent constructor..\n";
    }
};

class Student : public Person {
    public:
    int rollno;

    Student() {
        cout << "child constructor..\n";
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};
int main() {
    Student s1;
    s1.name = "rahul";
    s1.age = 19;
    s1.rollno = 1;

    s1.getInfo();
    return 0;
}
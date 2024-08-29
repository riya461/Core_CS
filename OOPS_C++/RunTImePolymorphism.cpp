// overriding 

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    void display(){
        cout << "parent class" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    // virtual expected to be overriden
    virtual void hello(){
        cout << "Hello from parent class" << endl;
    }
};

class Student: public Person{
    public:
    int student_id;
    // display function is present in both the base classes
    // overriden
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << student_id << endl;
    }
    void hello(){
        cout << "Hello from child class" << endl;
    }
};

int main(){
    Student s;
    s.name = "John";
    s.age = 25;
    s.student_id = 1234;
    s.display();
    s.hello();

    Person p;
    p.name = "Jane";
    p.age = 30;
    p.display();
    p.hello();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student: public Person{
    public:
    int student_id;
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << student_id << endl;
    }
};

class Teacher: public Person{
    public:
    string subject;
    double salary;
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    Student s;
    s.name = "John";
    s.age = 25;
    s.student_id = 1234;
    s.display();

    Teacher t;
    t.name = "Jane";
    t.age = 30;
    t.subject = "Machine Learning";
    t.salary = 50000;
    t.display();
    return 0;
}
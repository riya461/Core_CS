#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
    string name;
    int age;
    int student_id;
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << student_id << endl;
    }
};

class Teacher{
    public:
    string subject;
    double salary;
    void display(){
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

class TA: public Student, public Teacher{
    // display using the base class 
    // display function is present in both the base classes
    // so we need to specify which display function to use
    public:
    void display(){
        Student::display();
        Teacher::display();
    }
    
};

int main(){
    TA ta;
    ta.name = "John";
    ta.age = 25;
    ta.student_id = 1234;
    ta.subject = "Machine Learning";
    ta.salary = 50000;

    return 0;
}
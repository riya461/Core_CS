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

class GradStudent: public Student{
    public:
    string research_area;
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << student_id << endl;
        cout << "Research Area: " << research_area << endl;
    }
};

int main(){
    GradStudent gs;
    gs.name = "John";
    gs.age = 25;
    gs.student_id = 1234;
    gs.research_area = "Machine Learning";
    gs.display();
    return 0;
}
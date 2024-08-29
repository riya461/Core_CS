// multiple inheritance 

#include <iostream>
#include <string>
using namespace std;

// diamond problem 
class Person{
    public:
    Person(int x){
        cout << "Person::Person" << x <<" called" << endl;
    }
    Person(){
        cout << "Person::Person called" << endl;
    }
};

class Faculty: virtual public Person{
    public:
    Faculty(int x):Person(x){
        cout << "Faculty::Faculty" << x <<" called" << endl;
    }
};

class Student: virtual public Person{
    public:
    Student(int x):Person(x){
        cout << "Student::Student" << x <<" called" << endl;
    }
};

class TA: public Faculty, public Student{
    public:
    TA(int x):Faculty(x), Student(x){
        cout << "TA::TA" << x <<" called" << endl;
    }
    // TA(int x): Student(x), Faculty(x)Person(x) used if parameterized constructor is to be called in Person 
};
// ambiguity arises when we call the constructor of the base class
// virtual base class is used to avoid this ambiguity

// default constructor of base class is called
// if we want to call the parameterized constructor of the base class
int main(){
    TA ta1(30);
    return 0;
}
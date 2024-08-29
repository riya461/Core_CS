#include <iostream>
#include <string>
using namespace std;

class Teacher{

    // data hiding 
    private:
        double salary;
    public:
        Teacher(){
            dept = "Mathematics";
            cout << "Object is created" << endl;
            // no return type 
        }
        // parameterized constructor
        Teacher(string name, int age, string dept, string subject){
            this->name = name;
            this->age = age;
            this->dept = dept;
            this->subject = subject;
            // object properties are recognised by this pointer
        }
        // copy constructor
        Teacher(Teacher &t) // reference of the object
        {
            cout << "Copy constructor is called" << endl;
            this->name = t.name;
            this->age = t.age;
            this->dept = t.dept;
            this->subject = t.subject;
        }
        string name;
        int age;
        string dept;
        string subject;
    
    // setter and getter
    void setSalary(double s){
        salary = s;
    }
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1; // contructor is called
    // memory is allocated 
    // initialising the object
    t1.name = "John";
    t1.age = 35;
    t1.dept = "Mathematics";
    t1.subject = "Algebra";
    t1.setSalary(50000);
    cout << t1.name << " is a teacher of " << t1.dept << " department and teaches " << t1.subject << ". He is " << t1.age << " years old and earns " << t1.getSalary() << " per month." << endl;

    Teacher t2("Jane", 30, "Physics", "Optics");
    t2.setSalary(60000);
    cout << t2.name << " is a teacher of " << t2.dept << " department and teaches " << t2.subject << ". She is " << t2.age << " years old and earns " << t2.getSalary() << " per month." << endl;

    //default copy constructor
    // new memory is allocated
    Teacher t3(t2);
    cout << t3.name << " is a teacher of " << t3.dept << " department and teaches " << t3.subject << ". She is " << t3.age << " years old and earns " << t3.getSalary() << " per month." << endl;

    return 0;
}


// wrapping up fo data and function into a single unit 
// data hiding - sensitive information 
// private - can't be accessed outside the class for sensitive information


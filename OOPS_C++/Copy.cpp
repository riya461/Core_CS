#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
    string name;
    double* cgpa;
    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = new double;
        *(this->cgpa) = cgpa;
    }
    // copy constructor
    Student(Student &s){
        cout << "Copy constructor is called" << endl;
        this->name = s.name;
        this->cgpa = new double;
        *(this->cgpa) = *(s.cgpa);
        // above is deep copy
        // this->cgpa = s.cgpa; 
        // above is shallow copy 
    }
    // destructor 
    ~Student(){
        delete cgpa;
        // deleting the memory allocated
    }

    void getInfo(){
        cout << name << " has a CGPA of " << *cgpa << endl;
    }
};

int main(){
    Student s1("John", 8.5);
    s1.getInfo();
    Student s2 = s1;
    s2.name = "Jane";
    *(s2.cgpa) = 9.0;
    cout << "After changing the values: " << endl;
    s1.getInfo();
    s2.getInfo();
    return 0;
}

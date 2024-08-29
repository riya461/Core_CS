#include <iostream>
#include <string>

using namespace std;

class Shape{ // abstract class
    virtual void display() = 0;
    // pure virtual function 
    // automatically abstract class 

};

class Circle: public Shape{
    public:
    void display(){
        cout << "This is a circle" << endl;
    }
};

class Rectangle: public Shape{
    public:
    void display(){
        cout << "This is a rectangle" << endl;
    }
};

int main(){
    Circle c;
    c.display();

    Rectangle r;
    r.display();
    return 0;
}
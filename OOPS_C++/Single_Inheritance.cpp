// base class on to derived class

#include <iostream>
#include <string>
using namespace std;

// Single Inheritance
class A{
    public:
    int a;
    void display(){
        cout << "a = " << a << endl;
    }
};

class B: public A{
    public:
    int b;
    void show(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main(){
    B obj;
    obj.a = 10;
    obj.b = 20;
    obj.display();
    obj.show();
    return 0;
}
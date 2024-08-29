//static variables in fucntion initialised once and till lifetime of program
#include <iostream>
#include <string>
using namespace std;

void func(){
    static int count = 0;
    cout << count << endl;
    count++;
}
class A{
    public:
    static int count;
    A(){
        count++;
    }
    void display(){
        cout << count << endl;
    }
};
int main(){
    func();
    func();
    func();
    A a1;
    a1.display();
    A a2;
    a2.display();
    return 0;
}

// static object is created only once and till lifetime of program
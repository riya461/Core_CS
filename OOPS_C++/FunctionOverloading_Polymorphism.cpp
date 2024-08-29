// constructor overloading 
// parameterized constructor
// default constructor
// contructor chaining - calling one constructor from another

// Function overloading 
#include <iostream>
#include <string>
using namespace std;

class Add{
    public:
    int sum(int a, int b){
        return a + b;
    }
    int sum(int a, int b, int c){
        return a + b + c;
    }
    double sum(double a, double b){
        return a + b;
    }
};

int main(){
    Add obj;
    cout << obj.sum(10, 20) << endl;
    cout << obj.sum(10, 20, 30) << endl;
    cout << obj.sum(10.5, 20.5) << endl;
    return 0;
}
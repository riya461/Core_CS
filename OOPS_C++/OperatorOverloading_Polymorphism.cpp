// Operator overloading 
#include <iostream>
#include <string>
using namespace std;

class Complex{
    public:
    int real, imag;
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    Complex operator + (Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
};
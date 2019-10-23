#include<iostream>
#include<string>

using namespace std;

// ComplexNumber 
// real, imaginary

class ComplexNumber{
    int real;
    int imaginary;

    public:

    ComplexNumber(){
        real = 0;
        imaginary = 0;
    }

    /*
    ComplexNumber(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }*/

    ComplexNumber(int real, int imaginary) : real(real), imaginary(imaginary){
    }

    void showComplexNumber(){
        cout<<real<<" + i"<<imaginary<<"\n";
    }

    // Pass Objects by Value
    /*
    void addNumbers(ComplexNumber cx1, ComplexNumber cx2){
        real = cx1.real + cx2.real;
        imaginary = cx1.imaginary + cx2.imaginary;
    }*/

    // Pass Objects by Reference
    /*void addNumbers(ComplexNumber &cx1, ComplexNumber &cx2){
        real = cx1.real + cx2.real;
        imaginary = cx1.imaginary + cx2.imaginary;
    }*/

    // It will return an Object of ComplexNumber
    ComplexNumber addNumbers(ComplexNumber &cx1, ComplexNumber &cx2){
        ComplexNumber temp;
        temp.real = cx1.real + cx2.real;
        temp.imaginary = cx1.imaginary + cx2.imaginary;
        return temp;
    }

    // Operator Overloading
    ComplexNumber operator*(ComplexNumber &cn){
        ComplexNumber temp;
        temp.real = real * cn.real;
        temp.imaginary = imaginary * cn.imaginary;
        return temp;
    }

    
};  

int main()
{
    
    ComplexNumber c1(10, 20), c2(11, 22);

    c1.showComplexNumber();
    c2.showComplexNumber();

    //ComplexNumber c3;
    //c3.addNumbers(c1, c2);
    //c3 = c3.addNumbers(c1, c2);

    //c3.showComplexNumber();

    ComplexNumber c3 = c1 * c2; 
    //ComplexNumber c3 = c1.operator+(c2);
    c3.showComplexNumber();

    return 0;
}

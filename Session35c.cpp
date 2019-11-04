#include<iostream>

using namespace std;

//template<class T>
template<class John>
/*
void add(int num1, int num2){
    int num3 = num1 + num2;
    cout<<"Sum is: "<<num3<<"\n";
}

void add1(float num1, float num2){
    float num3 = num1 + num2;
    cout<<"Sum is: "<<num3<<"\n";
}
*/

/*void add(T num1, T num2){
    T num3 = num1 + num2;
    cout<<"Sum is: "<<num3<<"\n";
}*/

void add(John num1, John num2){
    John num3 = num1 + num2;
    cout<<"Sum is: "<<num3<<"\n";
}

int main()
{
    
    add(10, 20); // T -> int
    add(10.11, 20.22); // T -> float 

    return 0;
}

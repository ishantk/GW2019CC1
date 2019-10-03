#include<iostream>

using namespace std;
// class 
// istream, ostream are two classes
// cin (istream) and cout (ostream) are objects representing the classes

int main(){
    
    int a = 0;
    int b = 0;

    cout<<"Enter a:\n";
    cin>>a;

    cout<<"Enter b:\n";
    cin>>b;

    int c = a+b;

    cout<<"Hello World and sum is: "<<c<<"\n";

    return 0;
}

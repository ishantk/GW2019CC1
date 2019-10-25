#include<iostream>
#include<string>

using namespace std;

class CA{

private:
    int a;
    void showA(){
        cout<<"a is: "<<a<<"\n";
    }

protected:
    int b;    
    void showB(){
        cout<<"b is: "<<b<<"\n";
    }

public:
    int c;    
    void showC(){
        cout<<"c is: "<<c<<"\n";
    }

};

int main()
{
    
    CA obj;
    //obj.a = 10;
    //obj.showA();

    //obj.b = 10;
    //obj.showB();

    obj.c = 10;
    obj.showC();

    return 0;
}

#include<iostream>
#include<string>

using namespace std;

class CB; // Declare Class Before Use

class CA{

    int a;

    void show(){
        cout<<"CA show and a is: "<<a<<"\n";
    }

    // friend function can access private data of object
    // hello is not created in class. it is just declared in class.
    friend void hello(CA caObj);
    friend void bye(CA cObj1, CB cObj2);
};

class CB{

    int b;

    void hi(){
        cout<<"hi from CB and b is: "<<b<<"\n";
    }

    friend void bye(CA cObj1, CB cObj2);
};

// friend of CA
void hello(CA caObj){
    caObj.a = 10;
    caObj.show();
}

// friend of CA and CB both => Bridge
void bye(CA cObj1, CB cObj2){
    cObj1.a = 10;
    cObj2.b = 20;
    
    cObj1.show();
    cObj2.hi();
}

int main()
{
    CA obj1;
    CB obj2;
    
    //hello(obj1);

    bye(obj1, obj2);
    return 0;
}

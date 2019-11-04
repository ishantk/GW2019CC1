#include<iostream>
using namespace std;

class CA{

public:
    int x;

    void show(){
        cout<<"This is show from CA and x is: "<<x<<"\n";
    }
};

int main(){

    /*
    CA cObj;
    cObj.x = 100;
    cObj.show();
    */

    // POINTER TO ATTRIBUTE I.E. DATA MEMBER OF OBJECT
    int CA::*ptr = &CA::x;

    // POINTER TO FUNCTION I.E. MEMBER FUNCTION OF OBJECT
    void (CA::*fptr)() = &CA::show;

    // Access Object's Attribute and Function with pointers
    CA cObj;
    cObj.*ptr = 100;
    (cObj.*fptr)();

    return 0;
}
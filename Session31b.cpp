#include<iostream>
#include<string>

using namespace std;

class Parent{

    int a; // private attribute of Parent Object

    protected:
    int x; // protected attribute of Parent Object

    public:

    int b; // public attribute of Parent Object

    Parent(){
        a = 10;
        b = 20;
        x = 111;
        cout<<"Parent Object Constructed\n";
    }

    void show(){
        cout<<"a is "<<a<<" and b is: "<<b<<"\n";
        cout<<"x is: "<<x<<"\n";
    }
};

class Child : public Parent{ // Inheritance Relationship

    public:

    int b;

    Child(){
        //a = 111; // err
        b = 333;
        x = 555; // allowed
        cout<<"Child Object Constructed\n";
    }

    /*void myShow(){
        cout<<"b is: "<<b<<"\n";
    }*/

    // OVER-RIDING
    /*void show(){
        Parent::show(); // We can access Parent's show as well
        cout<<"b is: "<<b<<"\n";
    }*/
};

/*class Parent{
    // private
    // protected
    // public
};*/

// Modes of Inheritance
class ChildA : public Parent{ // Inheritance Relationship
    // private
    // protected
    // public
};

class ChildB : protected Parent{ // Inheritance Relationship
    // private
    // protected
    // protected
};

class ChildC : private Parent{ // Inheritance Relationship
    // private
    // private
    // private
};

int main()
{
    //Parent pObj;
    Child cObj;
    // RULE OF INHERITANCE
    // Before Object of Child, Object of Parent is created in memory

    //cObj.b = 222; // err
    //cObj.x = 555; // err
    cObj.show();
    //cObj.myShow();

    return 0;
}
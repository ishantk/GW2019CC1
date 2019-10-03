/*

    OOPS: Object Oriented Programming Structure
    Object
    Class

        1. Encapsulation
        2. Abstraction
        3. Inheritance
        4. Polymorphism

    Object is main point of discussion

    REAL LIFE
    Object is anything which we can see, touch 
    eg: chair, laptop, mobile, show, watch, fan
    Object is REALITY

    Class is representation how an object will look like
    Class is drawing of an object
    Class is Blueprint of an Object    

    Which will you Think of FIRST ? Class or Object ?

    OOPS Principle
    1. THINK of Object
    2. DRAW Object
    3. From Drawing CREATE Real Object

    Computer Science

    Object : A Multi Value Container i.e. a BOX
             Which may be homogeneous or hetrogeneous

    Class  : Textual Representation how an object will look like in memory


    Software : Create an e-Cmmerce App eg: Amazon/Myntra/Flipkart
               GST Tax Calculator

    [Procedureal Language]
    C : we can store data in primitves i.e. int, float char etc
        we can store data in arrays
        we can stre data in struct and union

        and can also write functions

    C++ : Object is added which brings 4 extra features 
        1. Encapsulation
        2. Abstraction
        3. Inheritance
        4. Polymorphism    

    In C we had struct and in C++ we have class  

    Design Pattern: (MVC)
    MODEL
        Data -> OBJECT
    VIEW
        UI
    CONTROLLER                  
        Logic

    1. Identify OBJECTS and associate data with them
    eg: User
            name
            phone
            age
            email
            password

        Product
            pid
            name
            price
            brand
            image

        User is an OBJECT
        name, phone, age, email and password are atributes



*/

#include<iostream>
using namespace std;

class User{
    // Attributes : Property of Object
    public:
    char name[120];
    int age;
    char phone[20];
    char email[120];
    char password[120];
};


int main()
{
    User u1; // u1 is an Object in memory

    cout<<"Enter Name of User:\n";
    cin>>u1.name;

    cout<<"You Enterd: "<<u1.name<<"\n";

    return 0;
}

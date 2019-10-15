#include<iostream>
#include<string>

using namespace std;

class Student{

    int roll;
    string name;

    public:

    /*Student(){
        roll = 0;
        name = "NA";
    }
    
    Student(int roll, string name){
        this->roll = roll;
        this->name = name;
    }
    
    */

    // Initialization List (This is faster than Constructor)
    Student() : roll(0), name("NA"){

    }

    // Initialization List with Parameterized Constructor (This is faster than Constructor)
    Student(int roll, string name) : roll(roll), name(name){

    }

    ~Student(){
        cout<<name<<" object deleted !!\n";
    }

    /* ERROR: only constructors take base initializers
    void setStudentDetails(int roll, string name) : roll(roll), name(name){

    }*/

    void setStudentDetails(int roll, string name){
        this->roll = roll;
        this->name = name;
    }

    void showStudentDetails(){
        cout<<roll<<" belongs to "<<name<<"\n";
    }

};

int main(){

    // Object Construction : Compile Time
    Student s1(101, "John");
    Student s2(201, "Fionna");
    Student s3;

    s3.setStudentDetails(301, "Leo");

    s1.showStudentDetails();
    s2.showStudentDetails();
    s3.showStudentDetails();

    // Object Construction : Run Time with new operator
    Student *sPtr1 = new Student(); // Default Constructor
    Student *sPtr2 = new Student(401, "Kim"); // Parameterized Constructor

    sPtr1->setStudentDetails(501, "Sia");

    sPtr1->showStudentDetails();

    delete sPtr1;

    sPtr2->showStudentDetails();

    delete sPtr2;

    return 0;
}
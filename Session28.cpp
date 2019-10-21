#include<iostream>
#include<string>

using namespace std;

class Student{
    
    string name;
    int *age;

    public:

    Student(){
        name = "NA";
        age = NULL;
    }

    Student(string name, int* age){
        this->name = name;
        this->age = age;
    }

    /* // SHALLOW COPY
    Student(Student &stu){ // Copy Contructor -> Object as Input through Reference
        // LHS  this->name | Destination in which we will copy
        // RHS  stu.name   | Sources from which we will copy
        this->name = stu.name;
        this->age = stu.age;
        cout<<"Copy Constructor\n";
    }
    */

   // We use copy constructor to deep copy data of object
   Student(Student &stu){ // Copy Contructor -> Object as Input through Reference
        this->name = stu.name;
        int data = *(stu.age);
        this->age = new int(data);
        cout<<"Copy Constructor\n";
    }

    void setStudentDetails(string name, int* age){
        this->name = name;
        this->age = age;
    }

    void showStudentDetails(){
        cout<<name<<" is "<<*age<<" years old\n";
        cout<<"age is: "<<age<<"\n";
    }
};

int main(){

    string myName = "John";
    int* myAge = new int(20);

    Student s1(myName, myAge);
    s1.showStudentDetails();

    Student s2 = s1; // Copy with Assignment Operator

    Student s3(s1);  // Copy with Copy Constructor
    
    cout<<"=================\n";

    s2.showStudentDetails();

    cout<<"=================\n";

    s3.showStudentDetails();

    cout<<"=================\n";
    cout<<"Address of s1 is: "<<&s1<<"\n";
    cout<<"Address of s2 is: "<<&s2<<"\n";
    cout<<"Address of s3 is: "<<&s3<<"\n";

    
    return 0;
}

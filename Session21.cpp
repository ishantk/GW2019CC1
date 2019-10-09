// OOPS
// 1. Think of Object
// 2. Create its Class
// 3. From Class Create Object in Memory

// 1. Think of Object : We must study requirements of Software which we wish to create
// Requirement : Hospital Management System
//               Patient, Staff, Accounts, Medicine ....
//               Patient is an Object. As it has lot of data associated with it
//               name, phone, email, age, gender, dateOfVisit are attributes of an Object

// 2. Create its class
//    Class is textual representation of an Object
//    i.e. whatever you write in class belongs to Object

#include<iostream> // cin and count
#include<string>   // use a data type called string

using namespace std;

// class Patient represents how a Patient Object will look like in memory
class Patient{ // Defining the Object

    // Attributes: Property of Object
    //private:
    public:
    string name;
    string phone;
    string email;
    //private:
    int age;
    char gender;
    string dateOfVisit; // Camel Case

    // Constructor : Property of Object
    // Which is executed on the moment Object is constructed in memory
    // name is same as that of class name and no return type
    // below constructor takes no input : DEFUALT CONSTRUCTOR | No-Arg Constructor
    
    /*Patient(){
        cout<<"Object Constructed\n";
        name = "NA";
        phone = "NA";
        email = "NA";
        age = 5;
        gender ='U';
        dateOfVisit = "NA";
    }*/

    Patient(); // Declaration of Constructor

    // Argument/Paramteterized Constructor | Non-Default Constructor
    Patient(string nm, string ph, string em, int a, char g, string dof){
        cout<<"Object Constructed\n";
        name = nm;
        phone = ph;
        email = em;
        age = a;
        gender = g;
        dateOfVisit = dof;
    }

    // More than 1 COnstructor -> Polymorphism

    // Fucntion : Property of Object
    /*void showPatientDetails(){
        cout<<"======================\n";
        cout<<"Details of "<<name<<"\n";
        cout<<phone<<"\t"<<email<<"\t"<<age<<"\t"<<gender<<"\t"<<dateOfVisit<<"\n";
        cout<<"======================\n";
    }*/

    void showPatientDetails();

    void setPatientDetails(string nm, string ph, string em, int a, char g, string dof){
        name = nm;
        phone = ph;
        email = em;
        age = a;
        gender = g;
        dateOfVisit = dof;
    }

};

Patient::Patient(){
    cout<<"Object Constructed\n";
    name = "NA";
    phone = "NA";
    email = "NA";
    age = 5;
    gender ='U';
    dateOfVisit = "NA";
}

void Patient::showPatientDetails(){
    cout<<"======================\n";
    cout<<"Details of "<<name<<"\n";
    cout<<phone<<"\t"<<email<<"\t"<<age<<"\t"<<gender<<"\t"<<dateOfVisit<<"\n";
    cout<<"======================\n";
}

// 3. From Class Create Object in Memory
//    We will create Objects in main function
int main(){
    
    // Hard-Coded Data in Object
    Patient p1, p2; // 2 objects created

    // Dyamic Data Substitution
    Patient p3("Leo", "+91 99999 88888", "leo@example.com", 12, 'M', "12.12.2017");
    cout<<"Address of p1 Object is: "<<&p1<<"\n";
    cout<<"Address of p2 Object is: "<<&p2<<"\n";

    // Write Data in Object
    cout<<"Enter name for p1 object:\n";
    cin>>p1.name;                  // Dynamic-Code

    p1.dateOfVisit = "12.12.2018"; // Hard-Code

    p2.name = "Fionna Flynn";
    p2.dateOfVisit = "20.3.2019";

    // Reading Data from Object
    //cout<<"Details of p1 Object: "<<p1.name<<"\t"<<p1.dateOfVisit<<"\t"<<p1.email<<"\n";
    //cout<<"Details of p2 Object: "<<p2.name<<"\t"<<p2.dateOfVisit<<"\t"<<p2.email<<"\n";
    //cout<<"Details of p3 Object: "<<p3.name<<"\t"<<p3.dateOfVisit<<"\t"<<p3.email<<"\n";

    p1.setPatientDetails("John Watson", "+91 99999 00000", "john@example.com", 22, 'M', "20.3.2019");

    p1.showPatientDetails();
    p2.showPatientDetails();
    p3.showPatientDetails();

    return 0;
}

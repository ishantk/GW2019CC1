#include<iostream>
#include<string>

using namespace std;

// Objective : Shallow Copy VS Deep Copy
//             1. HAS-A Relationship
//             2. Constructors and Destructors
//             3. Copy Constructor

class Address{

    // Attributes: Property Of Object
    string adrsLine;
    string city;
    string state;
    int zipCode;

    public:

    Address(){
       adrsLine = "NA";
       city = "NA";
       state = "NA";
       zipCode = 0; 
    }

    Address(string adrsLine, string city, string state, int zipCode){
       this->adrsLine = adrsLine;
       this->city = city;
       this->state = state;
       this->zipCode = zipCode; 
    }

    void setAddressDetails(string adrsLine, string city, string state, int zipCode){
       this->adrsLine = adrsLine;
       this->city = city;
       this->state = state;
       this->zipCode = zipCode; 
    }

    void showAddressDetails(){
        cout<<"Address: "<<adrsLine<<" | "<<city<<" | "<<state<<" | "<<zipCode<<"\n";
    }

    ~Address(){
        cout<<"Address "<<adrsLine<<" Deleted\n";
    }
};

//class Address;

class User{

    // Attributes: Property Of Object
    string name;
    string email;
    Address* address; // HAS-A Relationship | address as a Pointer

    public:

    User(){
        name = "NA";
        email = "NA";
        address = new Address(); // Dynamic Object : At Rutime | Heap
    }

    // Copy Constructor : Input -> Object's Reference
    /*User(User &user){ 
        this->name = user.name;
        this->email = user.email;
        this->address = user.address;
    }*/

    User(User &user){ 
        this->name = user.name;
        this->email = user.email;
        //this->address = user.address;
       
        // Now we will not copy Adddress Data Directlt
        this->address = new Address();
        // From Here we will copy the data into Address object which is newly created
    }

    User(string name, string email, Address* address){
        this->name = name;
        this->email = email;
        this->address = address; // Copy Operation : Address Copy
    }

    void setUserDetails(string name, string email, Address* address){
        this->name = name;
        this->email = email;
        this->address = address; // Copy Operation : Address Copy
    }

    void showUserDetails(){
        cout<<"User: "<<name<<" | "<<email<<"\n";
        address->showAddressDetails();
    }

    ~User(){
        cout<<"User "<<name<<" Deleted\n";
        delete address;
    }

    void showAddress(){
        cout<<"Address is: "<<address<<"\n";
    }

};

int main()
{
    
    Address* aPtr = new Address("Country Homes", "Ludhiana", "Punjab", 141001);
    User u1("John", "john@example.com",aPtr);
    //User u2 = u1; // Shallow Copy Operation  | Assignment Operator
    User u2(u1);    // Shallow Copy Operation | Copy Constructor

    // Dangling Pointer
    
    cout<<"aPtr: "<<aPtr<<" u1 address "<<&u1<<"\n";
    cout<<"aPtr: "<<aPtr<<" u2 address "<<&u2<<"\n";

    u1.showAddress();
    u2.showAddress();

    return 0;
}



/*
int main(){

    Address* aPtr = new Address("Country Homes", "Ludhiana", "Punjab", 141001);
    //aPtr->showAddressDetails();

    User* uPtr = new User("John", "john@example.com", aPtr);
    uPtr->showUserDetails();

    User* uPtr1 = uPtr;

    delete uPtr;
    uPtr1->showUserDetails(); // ?

    delete uPtr1;
    uPtr1->showUserDetails(); // ?

    //aPtr->showAddressDetails(); // Work

    //delete aPtr;
    //aPtr->showAddressDetails(); // Not Work after delete

    
    return 0;
}
*/
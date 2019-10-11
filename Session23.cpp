#include<iostream>
#include<string>

using namespace std;

// Constructors and Destructors
// OOPS Principle : 1. Think of an Object
//                  2. Create its Class
//                  3. From Class Create a Real Object

// 1. Think of an Object
// WhatsApp
// Message is an Object
// attributes: type, text, date, time, size and ack

// 2. Create its Class
class Message{
    // attributes : Property of Object
    // by default everything in Object is private
    int type; // 1->text, 2->audio, 3->photo, 4->video
    string text;
    string date;
    string time;
    int size;
    int ack;    //1->sent, 2->delivered, 3->seen

    public:
    // Default Constructor
    // Property of Object
    Message(){
        cout<<"Message Object Constructed\n"; 
        type = 1;
        text = "NA";
        // and so on others
    }

    // Destructor : Is Executed when Object is deleted from Memory
    //              So that we can save data of Object somewhere in case
    // Property of Object
    ~Message(){
        cout<<"Message Object Destructed: "<<text<<"\n"; 
    }

    // Destructors cannot take any inputs/arguments

    // Property of Object
    Message(int type, string text, string date, string time, int size, int a){
        // LHS (this->type) belongs to Object
        // RHS (type) belongs to Function
        // this-> is called this pointer which point to Object
        this->type = type;
        this->text = text;
        this->date = date;
        this->time = time;
        this->size = size;
        ack = a;
    }

    // Function : Property of Object
    // Setter Function : Set All Data in 1 go
    void setMessageDetails(int type, string text, string date, string time, int size, int a){
        // LHS belongs to Object
        // RHS belongs to Function
        // this-> is called this pointer which point to Object
        this->type = type;
        this->text = text;
        this->date = date;
        this->time = time;
        this->size = size;
        ack = a;
    }

    /*void showMessageDetails(){
        cout<<"Message is: "<<text<<" at "<<date<<"|"<<time<<"\n";
    }*/

    // Getter Function : Show all Data in 1 go
    void showMessageDetails();

    // Setter Function : To Set data for only 1 attribute
    void setText(string text){
        this->text = text;
    }

    // Getter Function : To Get data for only 1 attribute
    string getText(){   
        return text;
    }
};

// :: Scope Resolution Operator : Help to resolve Scopes
void Message::showMessageDetails(){
    cout<<"Message is: "<<text<<" at "<<date<<"|"<<time<<"\n";
}


int main(){
    
    Message m1;
    Message m2;

    m1.setMessageDetails(1, "This is Hello from ABC", "12.12.2018", "22:22", 5, 1);
    m1.setText("This is now wonderful");

    // Direct Access is Limited i.e. Data hiding or Encapsulation in Action
    // m2.text = "This is Horrible";

    m1.showMessageDetails();
    m2.showMessageDetails();

    cout<<"Text of m1 is: "<<m1.getText()<<"\n";

    return 0;
}

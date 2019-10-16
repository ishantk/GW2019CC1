#include<iostream>
#include<string>

// Objective
// References

using namespace std;

class Gmail{
    string user;
    string password;

    public:
    Gmail(){
        user = "NA";
        password = "AA";
    }

    Gmail(string user, string password){
        this->user = user;
        this->password = password;
    }

    void setGmailDetails(string user, string password){
        this->user = user;
        this->password = password;
    }

    void showGmailDetails(){
        cout<<user<<" can login with "<<password<<"\n";
    }
};

int main(){
    
    int a = 10;
    int b = a; // Copy Operation

    b++;

    cout<<"a is: "<<a<<" and b is: "<<b<<"\n"; // 10 and 11

    int x = 10;
    // Address of y is same as of x hence, they are same single container
    int &y = x; // Make another name of x as y
    // y is a reference variable
    y++;

    cout<<"x is: "<<x<<" and y is: "<<y<<"\n";


    Gmail account1("john@example.com", "pass123");
    Gmail account2 = account1; // Copy Operation

    account2.setGmailDetails("john@example.com", "john123");

    account1.showGmailDetails();
    account2.showGmailDetails();

    Gmail account3("fionna@example.com", "pass123");
    Gmail &account4 = account3; // Reference Copy Operation
    
    account4.setGmailDetails("fionna.flynn@example.com", "fionna.flynn123");

    account3.showGmailDetails();
    account4.showGmailDetails();




    cout<<"Address of account1 is: "<<&account1<<"\n";
    cout<<"Address of account2 is: "<<&account2<<"\n";
    cout<<"Address of account3 is: "<<&account3<<"\n";
    cout<<"Address of account4 is: "<<&account4<<"\n";

    return 0;
}

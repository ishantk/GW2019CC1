#include<iostream>
using namespace std;

int main(){

    /*
    // Actual Data
    char email[50] = "john@example.com";
    char password[50] = "john123";

    char userEmail[50];
    char userpassword[50];

    cout<<"Enter Email:\n";
    cin>>userEmail;
   
    cout<<"Enter Password:\n";
    cin>>userpassword;

    cout<<"User Email "<<userEmail<<" User Password: "<<userpassword<<"\n";


    if( strcmp(userEmail, email) == 0  && strcmp(password, userpassword) == 0){
        cout<<"Details Matched. Welcome !!\n";
    }else{
        cout<<"Details Mis-Matched. Retry !!\n";
    }
    */

    int result = strcmp("john", "John");
    cout<<"Result is: "<<result;

    char name[] = "John";
    strcat(name, " Watson");
    cout<<"name is: "<<name<<"\n";

    char myName[50];
    cout<<"myName is: "<<myName<<"\n";

    strcpy(myName, name);
    cout<<"myName now is: "<<myName<<"\n";

    int length = strlen(myName);
    cout<<"length of myName is: "<<length<<"\n";

    // Explore more of string functions

    return 0;
}
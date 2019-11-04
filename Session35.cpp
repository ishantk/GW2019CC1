#include<iostream>
using namespace std;

int main(){

    string name = "John";
    // cout<<"Name is: "<<name<<endl;
    cout<<"Name is: "<<name<<"\n";

    // char arrays will not show us the address rather they will show the complete string
    char word[] = {'O','F','F'};

    cout<<"Word is: "<<word<<"\n";
    cout<<"Address of 0th element of Word is: "<<&word<<"\n";       // Shall Give Address
    cout<<"Address of 0th element of Word is: "<<&word[0]<<"\n";    // Shall Give Value

    return 0;
}
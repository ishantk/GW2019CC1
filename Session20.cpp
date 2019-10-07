// 1. Think of an Object
// Movie is an Object
// Attributes: title, director, producer, rating, duration

#include<iostream>
#include<string>
using namespace std;

// 2. Create Drawing of Object i.e. Class

// class -> Textually describing how an object will be in memory
// RULE : By Default every attribute is private
class Movie{
    // Attributes : Property of Object and not of Class
    public:
    // char title[100];
    // char director[100];
    // char prodcuer[100];
    string title; // Pointer to a String
    string director;
    string prodcuer;
    float rating;
    float duration;

    // Constructor : Same Name as that of Class Name
    //               No Return Type
    // No-Arg Constructor -> Default Constructor
    Movie(){
        cout<<"Movie Object Created\n";
        title = "NA";
        director = "NA";
        prodcuer = "NA";
        rating = 2.0;
        duration = 120.0;
    }

    // Arg or Parmeterised Constructor
    // This has inputs
    Movie(string t, string d, string p, float r, float du){
        cout<<"Movie Object Created\n";
        title = t;
        director = d;
        prodcuer = p;
        rating = r;
        duration = du;
    }

    void showMovieDetails(){
        cout<<"Details of "<<title<<" Movie:\n";
        cout<<rating<<" | "<<duration<<"\n"; 
    }

};

// Whenever we run our program -> main is executed automatically
// Whatever we write in main is executed in a sequence one by one
int main(){

    // 3. Create a Real Object in memory from Class
    // Object Construction Statement
    Movie m1, m2;
    // m1 and m2 are 2 Objects which are created in Stack Region of RAM
    // m1 and m2 can be any name of your choice

    Movie m3("Joker", "NA", "NA", 1, 110);

    // Operations on Objects !!
    // Write, Update, Read and Delete


    cout<<"Enter Movie Title for m1 object: \n";
    cin>>m1.title; // Write operation

    cout<<"Enter Movie Rating for m1 object: \n";
    cin>>m1.rating;

    m1.rating = m1.rating + 0.5; // Update Operation

    /*
    cout<<"Details of m1 Movie Object:\n";
    cout<<m1.title<<" | "<<m1.rating<<" | "<<m1.duration<<"\n"; // Read Operation

    cout<<"Details of m2 Movie Object:\n";
    cout<<m2.title<<" | "<<m2.rating<<" | "<<m2.duration<<"\n"; // Read Operation

    cout<<"Details of m3 Movie Object:\n";
    cout<<m3.title<<" | "<<m3.rating<<" | "<<m3.duration<<"\n"; // Read Operation
    */

    m1.showMovieDetails();
    m2.showMovieDetails();
    m3.showMovieDetails();
    
    // Delete Will Happen Automatically when main finishes

    // PS: If you create an Object and do not write data in it
    //     Attributes will by default have values which will be garbage

    return 0;
}
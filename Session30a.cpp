#include<iostream>
#include<string>

using namespace std;

class Employee{
    
    string name;
    int salary;

    public:

    Employee():name("NA"), salary(0){

    }

    Employee(string name, int salary):name(name), salary(salary){

    }

    Employee operator>(Employee &emp){
        Employee temp;

        if(salary > emp.salary){
            temp.name = name;
            temp.salary = salary;
        }else{
            temp.name = emp.name;
            temp.salary = emp.salary;
        }


        return temp;
    }

    void showEmployee(){
        cout<<name<<" has salary of Rs."<<salary<<"\n";
    }

};

int main(){

    Employee e1("John", 30000);
    Employee e2("Fionna", 50000);
    Employee e3("Jack", 53000);
    Employee e4("Kim", 63000);
    Employee e5("FioSianna", 61000);

    //Employee e3 = e1 > e2; // Employee e3 = e1.operator>(e2);
    //e3.showEmployee();

    Employee e6 = e1>e2>e3;
    e6.showEmployee();

    // Sort this array of Objects using Operator Overloadingon the basis of salary
    Employee eArr[5] = {e1, e2, e3, e4, e5};

    return 0;
}
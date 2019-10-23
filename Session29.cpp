#include<iostream>
#include<string>

using namespace std;

// OOPS:
// Think of an Object
// MobilePhone
// name, price, ram, memory, os

// create class

class MobilePhone{

    string name;
    int price;
    int ram;
    int memory;
    string os;

    public:
    
    MobilePhone(){
        name = "NA";
        price = 0;
        ram = 0;
        memory = 0;
        os = "NA";
    }

    MobilePhone(string name, int price, int ram, int memory, string os){
        this->name = name;
        this->price = price;
        this->ram = ram;
        this->memory = memory;
        this->os = os;
    }

    void showMobilePhone(){
        cout<<name<<" is available for Rs."<<price<<"\n";
    }

    int getPrice(){
        return price;
    }


};

int main()
{

    MobilePhone m1("iPhoneX", 60000, 4, 128, "iOS");
    MobilePhone m2("iPhoneXI", 80000, 4, 256, "iOS");
   
    m1.showMobilePhone();
    m2.showMobilePhone();

    int total = m1.getPrice() + m2.getPrice();
    cout<<"total is: "<<total<<"\n";

    return 0;
}

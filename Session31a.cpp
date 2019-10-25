#include<iostream>
#include<string>

using namespace std;

// WHY INHERITANCE ?
// Common Attrinutes can be now put into a single parent object
// overall code redundancy will be finished

// Amazon ->  1. MobilePhone 2. LEDTV
// 1. MobilePhone | pid, brand, price, memory, os, ram
// 2.  LEDTV      | pid, brand, price, size, technology

/*
class MobilePhone{
    int pid;
    string brand;
    int price;
    int memory;
    string os;
    int ram;
};

class LEDTv{
    int pid;
    string brand;
    int price;
    int size;
    string technology;
};
*/

class Product{
    int pid;
    string brand;
    int price;
};

class MobilePhone : public Product{ // Inheritannce
    int memory;
    string os;
    int ram;
};

class LEDTv : public Product{
    int size;
    string technology;
};


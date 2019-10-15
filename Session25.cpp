#include<iostream>
#include<string>

using namespace std;

int main(){

    // Memory Allocation to a and array will happen at Compile Time
    // Single Value Container : Compile Time Memory Allocation
    int a = 10;
    // Multi Value Container : Compile Time Memory Allocation
    int array[5] = {10, 20, 30, 40, 50}; // Compile Time (static)

    cout<<"a is:"<<a<<"\n";
    cout<<"array is:"<<array<<"\n";

    // Single Value Container : Run Time Memory Allocation
    int *aPtr = new int(10);
    cout<<"aPtr is: "<<aPtr<<"\n";
    cout<<"*aPtr is: "<<*aPtr<<"\n";

    // Create an Array of 5 integers and create it ar Run Time in Heap Area
    // new is an operator which allocates memory dynamically i.e. at Run Time
    // Dynamic Memory Management : new
    // Multi Value Container : Run Time Memory Allocation
    int *ptr = new int[5]; // Run Time (dynamic)
    cout<<"ptr is: "<<ptr<<"\n";

    for(int i=0;i<5;i++){
        *(ptr+i) = 10+i;
    }

    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<"  ";
    }

    //delete aPtr;
    //delete ptr;

    return 0;
}

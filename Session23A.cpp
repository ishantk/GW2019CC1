#include<iostream>
#include<string>

using namespace std;

class Counter{
    static int sCount; // attribute: Property of Class  | static
    int count;         // attribute: Property of Object | non-static
    public:
    Counter(){
        count = 1;
        sCount = 1;
    }
    void incrementCount(){
        count++;
        sCount++;
    }
    void decrementCount(){
        count--;
        sCount--;
    }
    void showCount(){
        cout<<"count is: "<<count<<" and sCount is:"<<sCount<<"\n";
    }
};
int Counter::sCount; // Declare static attribute of class outside as well

int main(){

    Counter c1, c2, c3;

    c1.incrementCount();
    c2.incrementCount();
    c2.incrementCount();
    c1.incrementCount();
    c2.incrementCount();

    c3.decrementCount();
    c3.decrementCount();    
    c2.decrementCount();

    c1.showCount(); // count is: 3  and sCount is: ?
    c2.showCount(); // count is: 3  and sCount is: ?
    c3.showCount(); // count is: -1 and sCount is: ?
    
    return 0;
}

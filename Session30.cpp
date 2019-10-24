#include<iostream>
#include<string>

using namespace std;

class Counter{
    int count;
    public:
    Counter():count(0){
    }
    
    /*void incrementCount(){
        count++;
    }*/

    // Prefix ++
    void operator++(){
        count = count + 1;
    }

    // postfix ++
    void operator++(int x){
        count = count + 1;
    }

    void showCount(){
        cout<<"count is: "<<count<<"\n";
    }
};

int main()
{
    
    Counter c1;
    Counter c2;


    //c1.incrementCount();
    //c1.incrementCount();
    //c2.incrementCount();

    ++c1; // c1.operator++();
    ++c1; // c1.operator++();
    c1++;


    ++c2; // c1.operator++();

    c1.showCount();
    c2.showCount();

    return 0;
}

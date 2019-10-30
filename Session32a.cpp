#include<iostream>
#include<string>

using namespace std;


class CA{
    int a;
    int b;

    void hi(){
        cout<<"hi from CA\n";
    }

    void bye(){
        cout<<"bi from CA\n";
    }

    void show(){
        cout<<"a is: "<<a<<" and b is: "<<b<<"\n";
    }

    friend class CB;
};

class CB{

    public:
        void hello(CA obj){
            obj.a = 10;
            obj.b = 20;
            obj.show();
            cout<<"This is hello of CB\n";
        }

};

int main()
{
    
    CA caObj;
    CB cbObj;

    cbObj.hello(caObj);

    return 0;
}

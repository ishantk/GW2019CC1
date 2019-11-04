#include<iostream>
#include<string>

using namespace std;
        // Command Line Inputs (Arguments)
int main(int argc, char const *argv[])
{
    cout<<"argc is: "<<argc<<"\n";

    for(int i=0;i<argc;i++){
        cout<<argv[i]<<"\n";
    }

    return 0;
}

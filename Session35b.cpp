#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    /*
    ofstream os;
    os.open("/Users/ishantkumar/Downloads/myfile.txt");
    char name[100];
    cout<<"Whats Your Name:\n";
    //cin>>name;
    cin.getline(name, 100);
    os<<name<<"\n"; // Writing name in file
    cout<<"Data Written in File\n";
    os.close();
    


    ifstream of;
    of.open("/Users/ishantkumar/Downloads/myfile.txt");
    char line[100];
    of.getline(line,100);
    cout<<line<<"\n";
    of.close();

    */

    fstream file;
    file.open("/Users/ishantkumar/Downloads/myfile.txt", ios::in | ios::out | ios::app);

    //file>> | Read
    //file<< | Write

    // modes: https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
    

    // WAP : Student Object Details should be saved in a file

    return 0;
}

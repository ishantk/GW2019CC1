#include<iostream>
#include<string>
using namespace std;

// void show(int arr[10]){
//     for(int i=0;i<10;i++){
//         cout<<"arr["<<i<<"] is: "<<arr[i]<<"\n";
//     }
// }

void show(int* ptr){
    for(int i=0;i<10;i++){
        cout<<*(ptr+i)<<"\n";
    }
}

int main(){

    int array[10];

    show(array);

    return 0;
}

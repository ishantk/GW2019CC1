#include<stdio.h>

int main(){
    
    // 1. Create a FILE Pointer
    FILE *fp; // fp can be any name of your choice
    int length = 0;

    // 2. Open the file which we wish to access in modes as applicable
    fp = fopen("Session16.c","r"); // fopen is a built in fuction
    
    length = ftell(fp);
    printf(">> Length is: %d\n",length);

    // Steps: Logic
    fseek(fp, 0, SEEK_END);

    length = ftell(fp);

    printf(">> Length of File is: %d\n",length);

    // Last Step : To Close the File
    fclose(fp);

    return 0;
}

// Write a Program asking details of Customer and than saving it in file
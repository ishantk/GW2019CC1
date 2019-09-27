#include<stdio.h>

int main(){
    
    // 1. Create a FILE Pointer
    FILE *fp; // fp can be any name of your choice

    // 2. Open the file which we wish to access in modes as applicable
    fp = fopen("data.txt","w+"); // Modes of File : Explore

    fputs("This is quite a hectic day !!", fp);

    fseek(fp, 7, SEEK_SET);

    fputs("Awesome Day !!", fp);

    printf(">> File Written\n");

    // Last Step : To Close the File
    fclose(fp);

    return 0;
}

// Write a Program asking details of Customer and than saving it in file
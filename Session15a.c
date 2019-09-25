#include<stdio.h>
int main(){
    
    // FILE is a data type called struct i.e. Structure 
    FILE *filePtr;
    // fopen is a built in function which will give us pointer to file
    //filePtr = fopen("quote.txt","w");
    filePtr = fopen("quote.txt","a");

    fprintf(filePtr, "\nSearch the Candle, rather than cursing the darkness");
    //fprintf(filePtr, "Work Hard and get Luckier");

    printf(">> File Written with Data");

    fclose(filePtr);

    return 0;
}

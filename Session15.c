#include<stdio.h>
int main(){
    
    // FILE is a data type called struct i.e. Structure 
    FILE *filePtr;
    char ch;

    // fopen is a built in function which will give us pointer to file
    filePtr = fopen("Session14.c","r");

    int bCount = 0; // brace count
    int pCount = 0; // paranthesis count

    // Infinite Loop as its condition is always true
    while(1){
        ch = fgetc(filePtr);
        printf("%c",ch);

        if(ch=='{' || ch=='}'){
            bCount++;
        }

        if(ch=='(' || ch==')'){
            pCount++;
        }

        // EOF is called a MACRO which means a constant and tells end of file
        if(ch==EOF){
            break;
        }
    }

    // Close the File which you opened to release memory resources
    fclose(filePtr);


    if(bCount%2 != 0){
        printf("Syntax Error due to { }");
    }

    if(pCount%2 != 0){
        printf("Syntax Error due to ( )");
    }

    return 0;
}
// Assignment : Is their any syntax error for braces {} and paranthesis()
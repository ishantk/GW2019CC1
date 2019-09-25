#include<stdio.h>
int main(){
    
    // FILE is a data type called struct i.e. Structure 
    FILE *filePtr;

    // fopen is a built in function which will give us pointer to file
    filePtr = fopen("Session15c.c","w");

    char code[250] = "#include<stdio.h>\nint main(){\n\tprintf(\"Hello World\");\n}";

    fprintf(filePtr, code);
    //fprintf(filePtr, "Work Hard and get Luckier");

    printf(">> Session15c.c File Created");

    fclose(filePtr);

    return 0;
}

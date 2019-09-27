#include<stdio.h>

int main(){
    
    FILE *fp;

    fp = fopen("students.csv","a");
    fputs("Fionna, 81878 80987, fionna@example.com\n",fp);
    // fputs -> Writes an entire String
    // fputc -> explore this -> write charcater

    printf("File Created...");

    fclose(fp);

    return 0;
}

// Write a Program asking details of Customer and than saving it in file
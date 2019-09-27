#include<stdio.h>

int main(){
    
    FILE *fp;
    char textInFile[300];

    fp = fopen("students.csv","r");
    printf("%s", fgets(textInFile, 100, fp)); // Line by Line 
    // Check EOF and put the same code in a Loop

    fclose(fp);

    return 0;
}

// Write a Program asking details of Customer and than saving it in file
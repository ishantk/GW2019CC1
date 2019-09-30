#include<stdio.h>

int main(){
    
    // Limitation 1: We have fixed size
    // if number of customers increase, we have to re-create new program

    // Limitation 2: We just dont have name and age of customers, 
    // we have much more fields or data associated 
    char names[5][100]; // names of customer
    int ages[5];        // number

    for(int i=0;i<2;i++){
        printf(">> Enter Customer Name: \n");
        scanf("%s",&names[i]);

        printf(">> Enter Customer Age: \n");
        scanf("%d",&ages[i]);
    }

    for(int i=0;i<2;i++){
        printf(">> Details of Customer %d\n",i);
        printf(">> %s | %d \n", names[i], ages[i]);
    }

    return 0;
}

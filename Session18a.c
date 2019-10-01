/*
    Compile Time  Vs  Run Time
    static            dynamic
*/

#include<stdio.h>

int main(){
    
    int n=0;
    printf("Enter Number of Elements:\n");
    scanf("%d",&n);

    int* ptr = (int*)malloc(n*sizeof(int)); // help to get the chunk memory
    //int* ptr = (int*)calloc(n,sizeof(int)); // help to get the blocks of memory
    //ptr = (int*)realloc((n*n)*sizeof(int));
    // calloc | realloc
    int sum = 0;

    // if user will enter n as 25
    // 100 bytes of memory will be reserved

    // But if we use only 3 integral values 
    // i.e. only 12 bytes will be used and nothing else

    printf("Enter %d numbers:\n",n);
    for(int i=0;i<3;i++){
        scanf("%d", ptr+i);
        sum = sum + *(ptr+i);
    }

    printf("Sum is: %d\n",sum);

    // Delete the memory allocated
    free(ptr);

    return 0;
}

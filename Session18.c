/*
    Compile Time  Vs  Run Time
    static            dynamic
*/

#include<stdio.h>

int main(){
    
    int n=0;
    printf("Enter Number of Elements:\n");
    scanf("%d",&n);

    int numbers[n]; // memory is fixed as in the size value of n
    int sum = 0;

    // if user will enter n as 25
    // 100 bytes of memory will be allocated

    // But if we use only 3 integral values 
    // i.e. only 12 bytes will be used and Remaining 88 bytes are wasted

    printf("Enter %d numbers:\n",n);
    for(int i=0;i<3;i++){
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    printf("Sum is: %d\n",sum);

    return 0;
}

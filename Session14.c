#include<stdio.h>

int powerOfNum(int num, int power){
    int result = 1;
    for(int i=1;i<=power;i++){
        result = result * num;
    }
    return result;
}

// Recursion : Let the function execute itself again and again

int powerOfNum(int num, int power){
    
    if(num==0){
        return 0;
    }else if(power == 0){
        return 1;
    }else{

    }
}

int main(){
    
    int num;
    int power;

    printf("Enter Number:\n");
    scanf("%d",&num);

    printf("Enter Power:\n");
    scanf("%d",&power);

    int result = powerOfNum(num, power);
    printf("%d Power to %d is: %d \n",power, num, result);

    return 0;
}

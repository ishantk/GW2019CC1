#include<stdio.h>

int main(){

	int num = 0;
	printf("Enter a Number: \n");
	scanf("%d", &num); // 7

	int i = 111;
	while(i<=10){ // Before Entring the Loop, Check Condition
		printf("%d %d's are %d\n",num, i, (num*i));
		i++;
	}

	printf("============\n");

	num++;
	++num;

	i = 111;
	do{
		printf("%d %d's are %d\n",num, i, (num*i));
		i++;
	}while(i<=10); // Before Exiting the Loop, Check Condition

	num--;

	for(i=1;i<=10;i++){
		printf("%d %d's are %d\n",num, i, (num*i));
	}

	return 0;
}
#include<stdio.h>

void sqaureOfNumber(int* number){ // Pass By Pointers

	printf("*number before is: %d\n", *number); // 10

	*number = *number * *number;
	
	printf("*number after is: %d\n", *number);  // 100
}

int main(){
	
	int num = 10;

	printf(">> num before is: %d\n",num); // 10

	sqaureOfNumber(&num); // Call By Address

	printf(">> num after is: %d\n",num);  // 100	

	return 0;
}

// * -> Value At -> Indirection
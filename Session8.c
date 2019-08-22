#include<stdio.h>

void squareofNumber(int number){
	int result = number * number;
	printf("Square of %d is %d\n", number, result);
}

// main thread is representing main function
int main(){
	
	// containers num1, num2 and sum belongs to main
	// they are automatic/temporary/local/stack containers
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;

	squareofNumber(7);

	printf("sum is: %d\n",sum);

	return 0;
}
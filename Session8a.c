#include<stdio.h>

// Passing Value :)

void squareOfNumber(int num){

	printf("num address is: %p\n", &num);

	printf("num before is: %d\n",num);

	num = num * num;

	printf("num after is: %d\n",num);
}

int main(){

	int n = 10;

	printf("n address is: %p\n", &n);

	printf("n before is: %d\n",n);

	squareOfNumber(n);

	printf("n after is: %d\n",n);
	

	int x = 10;
	int y = x; // Value Copy
	
	y = y + 10;

	printf("x address is: %p | x is: %d\n", &x, x);
	printf("y address is: %p | y is: %d\n", &y, y);


	return 0;
}
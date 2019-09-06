#include<stdio.h>

int main(){
	
	int num1 = 10;
	int num2 = 20;

	// Pointer -> Which shall hold Address of container 
	//int* ptr = &num1;
	int* ptr;
	ptr = &num1;


	// Updating contents of Pointer
	ptr = &num2;

	*ptr = 111;

	printf("num1 is: %d\n",num1); // 10
	printf("num2 is: %d\n",num2); // 111
	printf("*ptr is: %d\n",*ptr); // 111

	return 0;
}
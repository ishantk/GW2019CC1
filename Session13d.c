// Constant Pointer
#include<stdio.h>

int main(){
	
	int num1 = 10;

	// Pointer -> Which shall hold Address of container 
	//int* ptr = &num1;
	// Constant Pointer
	// Once we have given address value to pointer it cannot be modified
	int* const ptr = &num1;

	// Updating contents of Pointer : Error
	//ptr = &num2;

	*ptr = 111;



	printf("num1 is: %d\n",num1); // 10
	printf("num2 is: %d\n",num2); // 111
	printf("*ptr is: %d\n",*ptr); // 111

	return 0;
}
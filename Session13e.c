// Constant Pointer, Pointing to a Constant :)
#include<stdio.h>

int main(){
	
	const int num1 = 10;
	int num2 = 20;

	// Pointer -> Which shall hold Address of container 
	//int* ptr = &num1;
	// Constant Pointer
	// Once we have given address value to pointer it cannot be modified
	const int* const ptr = &num1;

	// Updating contents of Pointer : Error
	//ptr = &num2; // err
	//*ptr = 111;  // err

	printf("num1 is: %d\n",num1); // 10
	printf("num2 is: %d\n",num2); // 111
	printf("*ptr is: %d\n",*ptr); // 111

	return 0;
}
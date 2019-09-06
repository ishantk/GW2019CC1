// Pointer to a Constant
#include<stdio.h>

int main(){
	
	int num1 = 10;
	const int num2 = 20;

	// Pointer -> Which shall hold Address of container 
	//int* ptr = &num1;
	// Pointer to a Constant
	// Pointer pointing to the location will have no right to modift data thr
	int const *ptr;
	ptr = &num1;

	// Updating contents of Pointer
	ptr = &num2;

	*ptr = 111; // error



	printf("num1 is: %d\n",num1); // 10
	printf("num2 is: %d\n",num2); // 111
	printf("*ptr is: %d\n",*ptr); // 111

	return 0;
}
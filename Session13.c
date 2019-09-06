#include<stdio.h>

int main(){
	
	// const -> To convert a storage container as a constant i.e. Read Only
	// Constants must be created in a single line
	// if we try to give value later it will take garbage value and make it as constant
	const int number = 10; // Read Only 
	// Value cannot be modified
	//number = 11;
	printf("Number is: %d\n", number);

	return 0;
}
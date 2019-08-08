#include<stdio.h>

// Whatever we write in main will be executed automatically in a sequence
int main(){
	
	// Single Value Container
	int age = 10;
	// age is name of storage container
	// 10 is literal i.e. constant value
	// int is data type | Type of Storage Container
	// data type also specifies size of container | 32 bits
	// bit is either 1 or 0 and smallest unit on our system is byte
	// byte means 8 bits
	// 0 0 0 0  0 0 0 0		| 1 1 1 1  1 1 1 1 (2 Power 8 -> 256)
	// if all the postive integers are suppose to be considered
	// Range 0 to 255
	// Range -128 to 0 to 127

	int jenniesAge = 10;

	int jacksAge = 12;

	printf("Address of age is: %p\n", &age);
	printf("Address of jenniesAge is: %p\n", &jenniesAge);
	printf("Address of jacksAge is: %p\n", &jacksAge);

	return 0;
}
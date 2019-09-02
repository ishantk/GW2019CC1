#include<stdio.h>

int main(){

	// & -> Address Of
	// * -> Value At

	int array[5] = {10, 20, 30, 40, 50};

	// Read Statements
	printf("array is: %p\n", array); // Address
	printf("&array is: %p\n", &array); // Address
	printf("array[0] is: %d\n", array[0]); 
	printf("address of array[0] is: %p\n", &array[0]); 
	printf("address of array[1] is: %p\n", &array[1]); 

	printf("*array is: %d\n", *array);
	printf("value at address of array[1] is: %d\n", *&array[1]); 

	// Creational Statement
	//int* ptr; // Pointer is a variable which stores address of some other variable
	//ptr = array;

	//int* ptr = array;
	//int* ptr = &array;   //warning
	//int* ptr = array[0]; //error

	int* ptr = &array[0];
	printf("ptr is: %p\n", ptr);
	printf("*ptr is: %d\n", *ptr);

	ptr++;

	printf("ptr now is: %p\n", ptr);
	printf("*ptr now is: %d\n", *ptr);

	int* myPtr = array;

	for(int i=0;i<5;i++){
		*myPtr = *myPtr * *myPtr;
		printf("%d\n",*myPtr);
		myPtr++;
	}

	printf("========\n");

	for(int i=0;i<5;i++){
		printf("%d\n", array[i]);
	}

	return 0;
}
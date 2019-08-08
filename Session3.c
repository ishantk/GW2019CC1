#include<stdio.h>

// This statement is outside the main
// Creational Statement
// Global Storage Container
int age = 10;  // Data Segment
//printf("age is: %d\n", age); // error
//age = 21;	// error
int main(){

	int age = 19;

	// 1. We are Updating Value of Global Varaible
	// 2. When age is created in the main as well, it will update it and not global
	age = 33;

	printf("age is: %d\n", age);
	printf("gloabal age is: %d\n", age);

	return 0;
}

// Statements : 1. Creational 2. Usage (Printing or Updation)
// Exploratory : How will i now access Global Valriable age in main ?


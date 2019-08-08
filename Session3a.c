#include<stdio.h>

int main(){

	// Types of Storage Containers
	// They have Type and we also say it as Data Type
	// 1. BASIC
	//		int | char | float | double
	// 2. DERIVED
	//		array | pointer | structure | union
	// 3. Enumeration
	//		enum	
	// 4. Void
	// 		void

	//char ch = 'I';
	//char ch = 'Innovation';
	char ch = 99; // ASCII
	char newCh = ch - 32;
	printf("ch is: %c\n", ch);
	printf("newCh is: %c\n", newCh);

	float pi = 3.14;
	printf("Float value: %f\n", pi);

	// Exploratory : What are UniCodes and How we can represent them in C ?
	// Exploratory : List out all the formatting symbols for different data types in C ?

	// char is 1 byte in memory
	// short is 2 byte in memory -> integral numbers
	// int is 4 byte in memory -> integral numbers
	// long int is 8 bytes in memory -> integral numbers
	// float is 4 bytes in memory -> decimal values
	// double is 8 bytes in memory -> decimal values
	// long double is 10 bytes in memory -> decimal values

	return 0;
}
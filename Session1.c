// Source Code : High Level Language which developers can easily understand
// stdio is standard input output header file
// header file contains declarartions (table of contents)
// header file stdio.h contains declaration for printf
// We have a library which will contain defintion of printf
// # is called PreProcessor
#include<stdio.h>
// main represents main thread
// whatever we write in main belongs to main
// when main finishes, process is finished :)
int main(){

	// Printing Tasks : Suppose to print something on Console
	printf("This is Awesome\n");
	printf("This is a Good Day\n");

	// Creational Tasks : Data Storage Containers
	int age = 10; // 10 is contsant i.e. it is a literal

	// Printing Task 
	printf("John is %d years old. \n",age);

	// Printing Tasks  : &age -> Address of age
	printf("age is created at location: %p \n",&age);
	return 0;
}
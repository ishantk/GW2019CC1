#include<stdio.h>

int main(){
	
	int x = 10;
	int *ptr = &x;			// Pointer to Integer
	int **pptr = &ptr;		// Pointer to Integer Pointer

	x = 100;
	(*ptr)++;
	x--;

	printf("**ptr is: %d\n", **pptr);

	return 0;
}
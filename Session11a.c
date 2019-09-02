#include<stdio.h>

int main(){

	// & -> Address Of
	// * -> Value At

	int array[2][5] = {{1, 3, 5, 7, 9}, {2, 4, 6, 8, 10}};

	int* ptr = array[0];

	printf("ptr is:%p\n", ptr);
	printf("*ptr is:%d\n", *ptr);
	

	return 0;
}
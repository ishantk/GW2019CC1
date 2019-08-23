#include<stdio.h>



int main(){

	// int -> storage container which conatins integer data 
	int num = 10;
	int johnsAge = 20;

	printf("Address of num is: %p\n", &num); // 0x7fff5e9d0ac8
	printf("Address of johnsAge is: %p\n", &johnsAge); // 0x7fff528fcac4

	//&num -> Address of num

	// int* -> storage container which contains address of int storage container
	// Pointer :)
	// nPtr is a container which contains address of num
	int* nPtr = &num;
	printf("nPtr contains: %p\n", nPtr); 		 // 0x7fff5e9d0ac8
	printf("Address of nPtr is: %p\n", &nPtr); 	 // 0x7fff5be5cab8
	printf("Value at nPtr is: %d\n", *nPtr);	 // *nPtr -> Value At nptr


	*nPtr = 101;

	printf(">> num is: %d\n", num);


	return 0;
}
#include<stdio.h>

// function
// f(x) = 2*x + 1
// f(2) = 2*2 + 1 -> 5
// name of fxn 
// x is input
// 2*x + 1 is definition

// Function : Name | Inputs | Definition (Sequential Statements)
// Function is a piece of block which has statements and they run sequentailly

// void : Acknowledgement | Return type
// fxn  : name of function| can be any name of your choice
// x    : input to the function
// {}   : Definition or Scope of Function
void fxn(int x){
	int y = 2*x + 1;
	printf("y is: %d\n", y);
}

// declaration
//int addNumbers(int num1, int num2);
int addNumbers(int x, int y);

int main(){
	
	// Execution of Function : To make your fxn run !! :)
	fxn(5); 
	fxn(7); 
	fxn(11); 

	int result = addNumbers(10, 20);
	printf(">> Result is: %d\n", result);

	result = addNumbers(11, 45);
	printf(">> Result is: %d\n", result);

	printf(">> Result is: %d\n", addNumbers(23, 78));
	
	return 0;
}

int addNumbers(int num1, int num2){
	int sum = num1 + num2;
	//printf("Sum is: %d\n",sum);
	return sum;
}

// int applyPromoCode(int price, int promoCode)
// 10 -> 10% Off (100 ~ 200)
// 20 -> 20% Off (>200 ~ 500)
// 50 -> 50% Off (>500)

// applyPromoCode(300, 50)
// eturn either discounted price or suggested promo code
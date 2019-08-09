#include<stdio.h>

int main(){

	int a = 20;
	int b = 200;
	int c = 30;
	// Operators 
	// Relational Operators : >, <, >=, <=, ==, !=
	printf("Result: %d\n",(a==b));

	// 1 -> true
	// 0 -> false

	// Logical Operators | && || !
	printf("Result: %d\n", !((c>a) || (c>b)));

	// Increment and Decrement Operators
	c++; // PostFix
	++c; // PreFix
	c++;
	++c;
	c--;
	--c;
	printf("c now is: %d\n", c); //32

	// Assignment Operators:
	// +=, -=, *=, /=, %=
	c+=3; // c = c + 3; // 35
	c%=3;				// 2
	printf("finally c is: %d\n", c); // 2

	// Explore Associativity and Precedence of Operators
	int d = c++;
	int e = ++c;
	printf("c is: %d\n",c); // 4
	printf("d is: %d\n",d); // 
	printf("e is: %d\n",e); // 

	int f = c++ - ++c + c++ + ++c - --c;
		//   4  - 6 + 6 + 8 - 7 = 5
	printf("f is: %d\n", f);

	// Ternary Operators
	// ?:  if a is greater than b assign a else assign b
	int result = (a>b) ? a : b;
	printf("Result is:%d\n", result);
	return 0;
}
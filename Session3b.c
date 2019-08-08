#include<stdio.h>

int main(){

	// Operator will perform operation on operands
	// Unary Operator -> Works on 1 Operand
	// Binary Operator -> Works on 2 Operands
	// Ternary Operator -> Works on 3 Operands
	int num1 = 10;
	int num2 = 3;

	int sum = num1 % num2;
	printf("Remainder is: %d\n", sum);

	// Arithmetic Operators
	// +, -, *, /, %

	// Bitwise Operators
	// &, |, ^ . ... explore more

	int x = 12;	// 	1 1 0 0
	int y = 4;	//	0 1 0 0
				//& 0 1 0 0
			    //| 1 1 0 0
				//^ 1 0 0 0
	//int z = x & y;
	//int z = x | y;
	int z = x ^ y;
	printf("z is: %d\n", z);

	// Shift Operators
	// >> and <<
	x = 12;
	y = 2;
	int p = x >> y; // 12 >> 2	| 1 1 0 0 >> 2 | _ _ 1 1 | 0 0 1 1
	int q = x << y; // 12 << 2  | 1 1 0 0 << 2 | 1 1 0 0 0 0 | 

	// 1 1 0 0 << 2
	// 0 0 0 0  1 1 0 0 << 2 | 0 0 1 1  0 0 0 0

	//x = 11; 	// 1 0 1 1
	x = -13;
	y = 3;		

	//11 : 1 0 1 1
	//-11: 0 1 0 0
	//			 1
	//     0 1 0 1
	//     _ _ _ 0
	//     1 1 1 0
	//     0 0 0 1
	//           1
	//     0 0 1 0 -> -2

	p = x >> y; // 1 0 1 1 >> 3 | _ _ _ 1 -> 0 0 0 1

	printf("p is: %d\n", p);
	printf("q is: %d\n", q);


	return 0;
}
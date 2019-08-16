#include<stdio.h>

int main(){

	int n = 0;
	printf(">> Enter Number:\n");
	scanf("%d", &n);

	for(int i=1;i<=n;i++){
		//printf("i: %d\n",i);
		//printf("----------\n");
		//printf("Hello\n");

		for(int j=1;j<=i;j++){
			//printf("j is: %d\n",j);
			printf("%d ", j);
		}
		printf("\n");

		//printf("*********\n");

	}

}

// Prog1: Step #1: Find either Row Wise Sum or Column Wise Sum
//     	  Step #2 : Compare Row and Column Sum | Which is greater ?

// Find Middle Man  in Triangle Printing :)

// Try to write least number of lines while coding :)
// PS: Think Before you code :)
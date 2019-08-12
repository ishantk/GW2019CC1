#include<stdio.h>
int main(){

	// Single Value Containers
	/*
	int ckr1Score=0;
	int ckr2Score=0;
	int ckr3Score=0;
	
	printf("Enter Score for Cricketer1\n");
	scanf("%d", &ckr1Score);
	printf("Cricketer1 Scored: %d scores\n", ckr1Score);

	printf("Enter Score for Cricketer2\n");
	scanf("%d", &ckr2Score);
	printf("Cricketer2 Scored: %d scores\n", ckr2Score);

	printf("Enter Score for Cricketer3\n");
	scanf("%d", &ckr3Score);
	printf("Cricketer3 Scored: %d scores\n", ckr3Score);

	teamScore = ckr1Score + ckr2Score + ckr3Score;
	printf(">> Team Score is: %d scores\n", teamScore);
	*/

	int ckr1Score=0;

	// Multi Value Container : Array
	// Array is a Homogeneous MVC
	// Array has a fixed size which cannot be changed at RUN-TIME
	// When to Use Arrays : Whne we know the exact size
	int teamScore[11];

	printf("ckr1Score is: %d\n", ckr1Score);
	printf("ckr1Score address is: %p\n", &ckr1Score);

	printf("teamScore is: %p\n", teamScore);
	printf("teamScore address is: %p\n", &teamScore);

	teamScore[0] = 111;
	printf("teamScore[0] is: %d\n", teamScore[0]);
	printf("teamScore[0] address is: %p\n", &teamScore[0]);

	teamScore[1] = 97;
	printf("teamScore[1] is: %d\n", teamScore[1]);
	printf("teamScore[1] address is: %p\n", &teamScore[1]);

	teamScore[2] = 23;
	printf("teamScore[2] is: %d\n", teamScore[2]);
	printf("teamScore[2] address is: %p\n", &teamScore[2]);

	return 0;
}
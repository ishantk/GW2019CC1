#include<stdio.h>
int main(){

	int ckr1Score = 0;
	int ckr2Score = 0;
	int ckr3Score = 0;

	int teamScore = 0;

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

	return 0;
}
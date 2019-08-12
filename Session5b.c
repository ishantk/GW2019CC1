#include<stdio.h>
int main(){

	
	int teamScore[11];

	int idx = 0;

	while(idx<11){
		printf("Enter Score for Cricketer %d\n", idx+1);
		scanf("%d", &teamScore[idx]);
		idx++;
	}

	printf("===============================\n");
	printf("Thank You For Updating Scores\n");
	printf("===============================\n");
	idx = 0;

	int score = 0;

	while(idx<11){
		printf("Score for Cricketer %d is %d\n", idx+1, teamScore[idx]);
		idx++;
		//score = score + teamScore[idx];
		score += teamScore[idx];
	}
	printf("===============================\n");
	printf(">> Team Score is: %d\n", score);
	printf(">> Higest Score Made by\n");
	printf(">> Lowest Score Made by\n");
	printf("===============================\n");
	return 0;
}

// PS: For 2 Different teams, get the inputs till you find Man of the Match :)
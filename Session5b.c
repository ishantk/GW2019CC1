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

	// 10, 20, 30, 50, 11, 12, 45, 12, 12, 9, 0
	int max = teamScore[0];
	int maxCricketerIdx = 0;

	idx = 1;
	while(idx<11){
		if(teamScore[idx] > max){
			max = teamScore[idx];
			maxCricketerIdx = idx;
		}
		idx++;
	}

	printf("===============================\n");
	printf(">> Team Score is: %d\n", score);
	printf(">> Higest Score %d Made by Cricketer %d\n",max, (maxCricketerIdx+1));
	printf(">> Lowest Score Made by\n");
	printf("===============================\n");
	return 0;
}

// PS: For 2 Different teams, get the inputs till you find Man of the Match :)

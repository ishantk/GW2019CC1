#include<stdio.h>

/*
			11
	John
		1 	10	
	Jack
		2	8
	John
		2   6
	Jack
		4   2
	John
		3   2			
		2

	>> John Planted Lastly 2 bricks !!	

*/

void constructWall(int numOfBricks){

	int jacksBrick = 0;
	int totalBricks = 0;

	for(int johnsBrick=1;johnsBrick<=numOfBricks;johnsBrick++){

		printf("John Planted Brick(s)# %d\n",johnsBrick);
		totalBricks = totalBricks + johnsBrick;


		jacksBrick = 2 * johnsBrick;
		printf("Jack Planted Brick(s)# %d\n",jacksBrick);

		totalBricks = totalBricks + jacksBrick;
		printf(">> Total Bricks Planted: %d\n",totalBricks);

		if(totalBricks >= numOfBricks){
			break;
		}

	}

}

int main(){

	int bricks = 0;

	printf(">> Enter Number of Bricks:\n");
	scanf("%d", &bricks);

	constructWall(bricks);

	return 0;
}
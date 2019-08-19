#include<stdio.h>

int main(){

	int myFloor = 7;

	// Use Case 
	for(int floorNum=1;floorNum<=10;floorNum++){
		
		if(floorNum<=myFloor){
			continue;
		}

		printf(">> Floor#%d Arrived\n", floorNum);

		/*
		if(floorNum == myFloor){
			printf("** MyFloor Arrived **\n");
			break;
		}*/
	}

	return 0;
}

// PS: explore goto label statements in C :)
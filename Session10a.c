#include<stdio.h>

// 2-D Array : Array od 1-D Arrays
int main(){
							  // 0	    1 	   2	  3	     4
	//int punjabPopulation[5] = {12314, 12411, 54323, 45432, 87864};
	//int himachalPopulation[5] = {1314, 1411, 5323, 4432, 8864};

	// Array of Arrays
	// 3 Arrays with each Array having 5 elements
	// Collection of Arrays :)
	//int indiaPopulation[2][5]; // 0s ore garbage values
	// 											0 									1
	int indiaPopulation[2][5] = { {12314, 12411, 54323, 45432, 87864}, {1314, 1411, 5323, 4432, 8864} };

	int indiaPopulationCounts[2];

	indiaPopulationCounts[0] = 0;
	indiaPopulationCounts[1] = 0;
	// 0th index -> count of punjabPopulation
	// 1st index -> count of himachalPopulation


	printf("element at 0th array's 2nd index: %d\n", indiaPopulation[0][2]);
	
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			indiaPopulationCounts[i] = indiaPopulationCounts[i] + indiaPopulation[i][j];
			printf("element at %d array's %d index: %d and address is: %p\n", i, j, indiaPopulation[i][j], &indiaPopulation[i][j]);
		}
	}

	// Tell by how much ?
	if(indiaPopulationCounts[0] > indiaPopulationCounts[1]){
		printf("Population of Punjab is higher than Himachal by %d\n", indiaPopulationCounts[0] - indiaPopulationCounts[1]);
	}else{
		printf("Population of Himachal is higher than Punjab by %d\n", indiaPopulationCounts[1] - indiaPopulationCounts[0]);
	}

	return 0;
}
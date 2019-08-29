#include<stdio.h>

// 1-D Arrays

int main(){

	// Represent Data in Single Value Containers
	int ldhPopulation = 12314;
	int jalPopulation = 12411;
	int asrPopulation = 54323;
	int fzrPopulation = 45432;
	int batPopulation = 87864;

	//int count = ldhPopulation + jalPopulation ...

	// Challenge : If data increases we as developer 
	//             have to put more efforts in writing code

	// Solution : Arrays | Multi Value Container
							// 0	    1 	   2	  3	     4
	int punjabPopulation[5] = {12314, 12411, 54323, 45432, 87864};
	int himachalPopulation[5] = {1314, 1411, 5323, 4432, 8864};

	int punjabCount = 0;
	int himachalCount = 0;

	//int punjabPopulation[5];
	//punjabPopulation[0] = 12314;

	//printf("punjabPopulation is: %d\n", punjabPopulation);			// Warning with Garbage Value shown
	//printf("punjabPopulation[2] is: %d\n", punjabPopulation[2]);
	//printf("punjabPopulation[22] is: %d\n", punjabPopulation[22]);  // Warning with Garbage Value shown

	for(int i=0;i<5;i++){
		punjabCount = punjabCount + punjabPopulation[i];
		himachalCount = himachalCount + himachalPopulation[i];
		//printf("Address of %d location is: %p \n", i, &punjabPopulation[i]);
	}

	printf("Population Count of Punjab is: %d\n", punjabCount);
	printf("Population Count of Himachal is: %d\n", himachalCount);
	
	return 0;
}
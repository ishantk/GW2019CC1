#include<stdio.h>

// Conditions : Flows in a Program
// if/else | Either this or that
int main(){

	int internet = 1;
	int gps = 0;

	// Regular if/else
	/*
	if(internet){
		printf("internet in enabled you can browse google maps\n");
	}else{
		printf("please check internet and try again\n");
	}
	*/

	// Nested if/else
	/*
	if(internet){
		if(gps){
			printf("internet is enabled you can browse google maps\n");
			printf("with google maps you can navigate\n");
		}else{
			printf("please check gps and try again\n");
		}
	}else{
		printf("please check internet and try again\n");
	}
	*/

	/*
	if(internet && gps){
		printf("internet in enabled you can browse google maps\n");
		printf("with google maps you can navigate\n");
	}else{
		printf("please check internet or gps and try again\n");
	}*/

	int typeOfCab = 0;
	int baseFare = 100;
	
	printf("========================\n");
	printf("1. Book OLA Micro Cab\n");
	printf("2. Book OLA Mini Cab\n");
	printf("3. Book OLA Sedan Cab\n");
	printf("4. Book OLA Shared Cab\n");
	printf("5. Book OLA Bike\n");
	printf("========================\n");
	printf(">> Which cab you would like to choose:\n");
	scanf("%d",&typeOfCab);
	
	// Ladder if/else
	/*
	if(typeOfCab == 1){
		printf(">> Thank You for Selecting OLA Micro\n");
		baseFare += 50;
	}else if(typeOfCab == 2){
		baseFare += 100;
		printf(">> Thank You for Selecting OLA Mini\n");
	}else if(typeOfCab == 3){
		baseFare += 200;
		printf(">> Thank You for Selecting OLA Sedan\n");
	}else if(typeOfCab == 4){
		baseFare += 20;
		printf(">> Thank You for Selecting OLA Shared\n");
	}else if(typeOfCab == 5){
		baseFare += 10;
		printf(">> Thank You for Selecting OLA Bike\n");
	}else{
		printf(">> Please Select the Cab First to Proceed\n");
	}*/

	switch(typeOfCab){
		case 1:
			printf(">> Thank You for Selecting OLA Micro\n");
			baseFare += 50;
			break;

		case 2:
			baseFare += 100;
			printf(">> Thank You for Selecting OLA Mini\n");
			break;
			
		case 3:
			baseFare += 200;
			printf(">> Thank You for Selecting OLA Sedan\n");
			break;

		default:
			printf(">> Please Select the Cab First to Proceed\n");
			break;			
	}

	printf("You have to pay %d amount\n",baseFare);

	printf("========================\n");


	return 0;
}
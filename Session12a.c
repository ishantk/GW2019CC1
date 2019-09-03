#include<stdio.h>

int main(){
		
	char name[20];	
	char email[20];
	char phone[20];

	printf("Enter Your Name\n");
	//scanf("%s",name); 	// Read Word from User
	scanf("%[^\n]s",name);  // Read Sentence from User

	printf("Enter Your Email\n");
	scanf("%s",email);

	printf("Enter Your Phone\n");
	scanf("%s",phone);

	printf("Your Details: %s | %s | %s\n", name, email, phone);

	int i = 0;
	while(name[i] != '\0'){
		//printf("%c\n", name[i]);
		i++;
	}	

	printf("Length of %s is: %d\n", name, i);

	if(i<3){
		printf("%s\n","Invalid Name");
	}

	// Code : Validating data enetered by user
	//        Validation 1. Check that name should not be less than 3 characters
	//		  Validation 2. In email we must check for @ and .
	//        Validation 3. Phone must be less than 15 character and more than 12 characters with space not counted as data	

	// Rules to Signup/Register User in the App :)

	return 0;
}
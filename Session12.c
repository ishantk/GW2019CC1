#include<stdio.h>

int main(){
	
	char ch = 'A';

	// String
	char word[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // null character

	printf("ch is: %c\n", ch);
	printf("word is: %c\n", word[1]);

	printf("word is: %s\n", word);

					 // String Literal
	char email[20] = "john@example.com";
	printf("%s\n", email);

	

	return 0;
}
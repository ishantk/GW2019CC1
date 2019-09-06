#include<stdio.h>

void calculateArea(int side){
	printf("%s %d\n", "Area of Square is:", side*side);
}

float calculateAreaOfRectangle(float length, float breadth){
	float area = length * breadth;
	return area;
}

int main(){

	//calculateArea(5);

	// Pointer to a Function :)
	void (*fptr)(int) = &calculateArea;

	(*fptr)(11); // Execution of Function

	return 0;

}
//Cameron Cobb
// CS 135
// circle.c

#include <stdio.h>
#define pi 3.14

int main(){
	printf("This program computes values related to an inscribed circle.\n");
	int radius;
	printf("Enter the value of the radius: ");
	scanf("%d", &radius);

// equations
	int diameter = radius * 2.0;
	float circumference = radius * 2.0 * pi; //decimal
	float area_of_circle = pi * (radius * radius); //decimal
	int perimeter_of_square = (radius * 2.0)+(radius * 2.0)+(radius * 2.0)+(radius * 2.0);
	int area_of_square = (radius * 2.0)*(radius * 2.0);
	float difference = area_of_square - area_of_circle;

// print statements
	printf("The diameter of the circle is: %d\n", diameter);
	printf("The circumference of the circle is: %.3f\n", circumference);// decimal
	printf("The area of the circle is: %.3f\n", area_of_circle);//decimal
	printf("The perimeter of the square is: %d\n", perimeter_of_square);
	printf("The area of the square is: %d\n", area_of_square);
	printf("The difference between the area of the square and the circle is: %.3f\n", difference);//decimal
	return 0; 
}
//end of program

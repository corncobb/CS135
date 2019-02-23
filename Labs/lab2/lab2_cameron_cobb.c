//Cameron Cobb
//CS135 - 1201 lab
//Minutes conversion

#include <stdio.h>

// start of code
int main(){
	int totalminutes, minutes, hours, weeks, days;
	printf("Enter a number of minutes: ");
	scanf("%d", &totalminutes);
	weeks = totalminutes/60/24/7;
	days = (totalminutes/60/24)%7;
	hours = (totalminutes/60)%24;
	minutes = (totalminutes)%60;

	printf("This represents: %d weeks, %d days, %d hours, %d minutes", weeks, days, hours, minutes);

	return 0;//end code
}
// Cameron Cobb
// CS 135 
// date.c

#include <stdio.h>

int main(){
	int day1, month1, year1;
	int day2, month2, year2;
	int day3, month3, year3;
	int day4, month4, year4;
//define variable
	printf("Enter date 1 (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day1, &month1, &year1);

	printf("Enter date 2 (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day2, &month2, &year2);

	printf("Enter date 3 (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day3, &month3, &year3);

	printf("Enter date 4 (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day4, &month4, &year4);
// input statements
	printf("\n\nYear\tMonth\tDay\n");
	printf("%4d\t%2d\t%-2d",year1 ,month1 ,day1);
	printf("\n%4d\t%2d\t%-2d",year2 ,month2 ,day2);
	printf("\n%4d\t%2d\t%-2d",year3 ,month3 ,day3);
	printf("\n%4d\t%2d\t%-2d\n",year4 ,month4 ,day4);
//print statements
	return 0;
// return
}
// end of code

//Cameron Cobb
//CS135 LAB
//lab3_problem2.c 

#include <stdio.h>

int main(){
	int budget;
	int items1, price1;
	int total;

	printf("Please enter your budget: ");
	scanf("%d", &budget);

	while(budget >= 0){
		printf("Please enter the items and price: ");
		scanf("%d, %d", &items1, &price1);
		total = items1*price1;
		budget = budget - (total);
	}
	int remainder = (budget+total);
	printf("You cannot buy the last items.");
	printf("\nYour remaining budget is %d.\n", remainder);

    return 0;

}

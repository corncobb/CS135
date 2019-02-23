//Cameron Cobb
//CS135 Lab
//lab12_problem1.c

# include <stdio.h>
# include <stdlib.h>


int main(){

	int n, *array;
	float avg, sum;
	for(;n != 0;){
		printf("Enter an integer: ");
		scanf("%d", &n);
		if(n != 0){
		array = (int*) malloc(n * sizeof(int));
		printf("Enter %d numbers: ",n);
		for(int i = 0; i < n; ++i){
        		scanf("%d", array + i);
        		sum += *(array + i);
		}
		avg = sum/n;
		printf("The average is: %.1f\n", avg);
		free(array);	
		}
	}

	return 0; //returns 0... what a surprise...
}

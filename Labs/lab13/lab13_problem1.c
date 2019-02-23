//Cameron Cobb
//CS135
//lab13_problem1

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int age;
	char first[50], last[50];
   	FILE *fptr;
	fptr = fopen(argv[1],"w");
	printf("This program reads and saves ages and names in a text file.\n");
	
	while(age != 0){
		printf("Enter person (age, first last): ");
   		scanf("%d, %s %s", &age, first, last);
		if(age != 0){
		fprintf(fptr,"%d, %s %s\n", age, first, last);
		}
   	}
   	
   	fclose(fptr);

   	return 0;


}

//Cameron Cobb
//CS135
//lab13_problem2.c

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
	int age;
	char first[50], last[50];

	printf("This program prints ages and names from a text file.\n");

   	FILE *fptr;
	fptr = fopen(argv[1],"r");
	
	while(feof(fptr) == false){
		fscanf(fptr, "%d, %s %s", &age, first, last);
		printf("Name: %d, %s %s\n", age, first, last);
		if(fscanf(fptr, "%d, %s %s", &age, first, last) != 3){
			break;
		}
   	}
   	fclose(fptr);

   	return 0;


}

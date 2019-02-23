//Cameron Cobb
//
//lab4_problem1.c

#include <stdio.h>


int main(){
	int new_lines,tabs,characters;
	char c;
	printf("Enter a sentence (end by ‘.’ or ‘?’ or ‘!’): ");
	new_lines = 0;
	tabs = 0;
	characters = 0;
	
	do {
	scanf("%c",&c);

		switch(c){
			case ' ': characters += 1;
					break;
			case '\n': new_lines += 1;
					break;
			case '\t': tabs += 1;
					break;
			
			}
	} while (c != '.' && c != '!' && c != '?');
	printf("Number of space characters: %d\n", characters);
	printf("Number of new line characters: %d\n", new_lines);
	printf("Number of tabs: %d\n", tabs);

	return 0;

}
	


//Cameron Cobb
//CS135
//lab11_problem1.c

#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
	int n, i, len;
	printf("Enter an integer: ");
	scanf("%d", &n);
	for (i = 1; i < argc; i++){
		if (strlen(argv[i]) > n){
		printf("%s has at least %d characters\n", argv[i], n);
		}

	}
	return 0;
}

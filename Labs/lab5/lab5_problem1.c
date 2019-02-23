//Cameron Cobb
//lab5_problem1.c

#include <stdio.h>
#define N 10

int main(){


int val [N], i;
for (i = 0; i < N; i++){
	printf("Value %d:", i+1);
	scanf("%d", &val[i]);	
}
printf("The even indexed values are: ");
for (i = 0; i < N; i++){
	if (i % 2 == 0){
	printf("%d, ", val[i]);
}
}
printf("\nThe odd indexed values are: ");
for (i = 0; i < N; i++){
	if (i % 2 != 0){
	printf("%d, ", val[i]);
}
}
return 0;
}




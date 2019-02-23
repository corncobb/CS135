// Cameron Cobb
// CS135 lab
// lab8_problem1.c

#include <stdio.h>

void rotate_left(int *i, int *j, int *k){
	int temp;
	temp = *i;
	*i = *j;
	*j = *k;
	*k = temp;
}

int main(){
	int i = 1, j = 2, k = 3;
	printf("i == %d, j == %d, k == %d", i, j, k);
	rotate_left(&i,&j,&k);
	printf("\ni == %d, j == %d, k == %d\n", i, j, k);
	return 0;
}

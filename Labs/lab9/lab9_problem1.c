//Cameron Cobb
//CS135
//lab9_problem1.c

#include <stdio.h>
#define SIZE 15

int swap(int *a, int *b){
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}


int main(){

	int arr[SIZE];
	printf("Enter 15 integers:\n");
	for(int i=0; i<SIZE; i++){
		scanf("%d", &arr[i]);
	}
	swap(&arr[0],&arr[7]); 
	swap(&arr[8],&arr[3]); 
	swap(&arr[14],&arr[0]); 
	printf("\n");
	printf("Swapped array:\n");
	for(int i=0; i<SIZE; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

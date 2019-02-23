//Cameron Cobb
//CS135
//Lab7.c

#include <stdio.h>

int n,k,count;

int digit(int n,int k){

	int l;
	int r;
	for(int i = 1; i<k; i++){
		l = n/10;
		n=l;
	}
	r = n%10;

	if(k > n){
		r = -1;
		}
	return r;
}

int main(){
	do {
	printf("Enter two positive integers (n, k): ");
	scanf("%d, %d", &n, &k);
	} while (n<0 || k<0);
	printf("The k=%d digit of %d is: %d\n", k, n, digit(n, k));
}



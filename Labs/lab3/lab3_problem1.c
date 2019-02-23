//Cameron Cobb
//CS135
//lab3_problem1.c


#include <stdio.h>

int main(){
	int w,x,y,z;
	printf("Enter 4 integers (w, x, y, z): ");
	scanf("%d, %d, %d, %d", &w ,&x ,&y ,&z);
	int sum1 = w + x;
	int sum2 = y +z;
	int mod1 = w%2;
	int mod2 = x%2;
	int mod3 = y%2;
	int mod4 = z%2;

	if (sum1 <= sum2){
		printf("Condition 1 is true.\n");
	}else{
		printf("Condition 1 is false.\n");
	}
	if (mod1 == 0 && mod2 == 0 && mod3 == 0 && mod4 ==0){
		printf("Condition 2 is true.\n");
	}else{
		printf("Condition 2 is false.\n");
	}

	return 0;
}

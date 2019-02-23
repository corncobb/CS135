// Cameron Cobb
// CS135
// lab6_problem1.c

#include <stdio.h>

int compute_volume(int l,int w,int h);
int compute_area(int l,int w, int h);
int main(){
	int l=0, w=0, h=0;
	//int l, w, h;
	do{
	printf("Enter the dimensions of the square prism (l, w, h): ");
	scanf("%d, %d, %d",&l,&w,&h);
	}while((l<0)||(w<0)||(h<0));
	int result1 = compute_area(l,w,h);
	int result2 = compute_volume(l,w,h);
	printf("The area of the prism is: %d\n", result1);
	printf("The volume of the prism is: %d\n", result2);
	return 0;
	
}
int compute_volume(int l,int w,int h){
	return l*w*h;
	
}
int compute_area(int l,int w, int h){
	int side1 = (l*w)*2;
	int side2 = (l*h)*2;
	int side3 = (w*h)*2;
	return side1 + side2 + side3;
}

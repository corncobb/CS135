//Cameron Cobb
//CS135 lab
//lab10_problem1.c

#include <stdio.h>


int main(){
	char str[41], even[41], odd[41], *p_start, *p, *e, *o;
	p = str;
	e = even;
	o = odd;
	
	printf("Enter a string (40 characters maximum): ");
	scanf("%s", &str);
	//puts(str);

	for(int i = 0; *p != '\0'; i++){
		if(i % 2 == 0){
		*e = *p;
		e=e+1; 

		}else{
		*o = *p;
		o = o+1;
		}
		

	 p=p+1;

	}
	*e = '\0';
	*o = '\0';
	
	printf("The even string is: %s\n", even);
	printf("The odd string is: %s\n", odd);
	
	return 0;

}



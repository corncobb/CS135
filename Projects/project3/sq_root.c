// Cameron Cobb
// CS135
// sq_root.c

#include <stdio.h>
#include <math.h>


int main(){
        double n;
        printf("Enter a number: ");
        scanf("%lf", &n);
        double old_guess;
        double a_number = fabs(((old_guess)*(old_guess))-n);
        old_guess = 1.0;
        while(a_number > .00001){

                printf("%10.5lf\n", old_guess);
                old_guess = ((old_guess + (n / old_guess)) / 2.0);
                a_number = fabs(((old_guess)*(old_guess))-n);
        }
        printf("Estimated square root of %.5lf: %.5lf", n, old_guess);
        return 0;
}
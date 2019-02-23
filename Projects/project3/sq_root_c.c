// Cameron Cobb
// CS135
// sq_root_c.c

#include <stdio.h>
#include <math.h>


int main(){
        float n;
        printf("Enter a number: ");
        scanf("%f", &n);
        float old_guess;
        float a_number = fabs(((old_guess)*(old_guess))-n);
        old_guess = 1.0;
        int i = 0;
        while(a_number > .00001){
                printf("%d", i);
                i++;
                printf("\t%9.5f\n", old_guess);
                old_guess = ((old_guess + (n / old_guess)) / 2.0);
                a_number = fabs(((old_guess)*(old_guess))-n);
                if(i >= 16){
                    break;
                }
        }
        printf("Estimated square root of %.5f: %.5f", n, old_guess);
        /*if (i >= 16){
        //    printf("\nThe program got \"stuck\"...");
        }*/
        return 0;

}
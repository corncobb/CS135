// Cameron Cobb
// CS135
// series.c

#include <stdio.h>
#include <math.h>

int main(){
        int n, sum = 0, start = 1, eq;
        printf("Enter an integer number: ");
        scanf("%d", &n);

        for(; start <= n; start++){
            //eq = pow(-1,start+1)*((start*(start+1))/2); //don't even need a loop for this piece of code...
            eq = pow(-1,start+1)*((start*start));
            sum = sum + eq;
        }
        printf("The value of the series is: %d", sum);
        return 0;
}
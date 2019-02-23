//Cameron Cobb
//CS135
//calc_c.c

#include <stdio.h>
#include <math.h>

int main(){
    int mode = 1;
    int n;
    printf("This program implements a calculator.\n");
    while (n!=8){
            if(mode == 1){
            double n1 = 0, n2 = 0, sum, sub, product, div;
            printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - exp(x)\n6 - log(x)\n7 - toggle calculator type\n8 - exit program\nPlease enter your option: ");
            scanf("%d", &n);
            void function(){
                    printf("Enter first term: ");
                    scanf("%lf", &n1);
                    printf("Enter second term: ");
                    scanf("%lf", &n2);
            }
            if (n > 8 || n < 1){
                printf("Invalid Option.\n");
            }
            switch(n){
                case 1://addition
                    function();
                    sum = n1 + n2;
                    printf("The sum is: %.15lf\n", sum);
                    break;

                case 2://subtraction
                    function();
                    sub = n1 - n2;
                    printf("The difference is: %.15lf\n", sub);
                    break;

                case 3://multiplication
                    function();
                    product = n1*n2;
                    printf("The product is: %.15lf\n", product);
                    break;

                case 4://division
                    function();
                    if(n2 == 0){
                        printf("Cannot divide by zero!\n");
                        break;
                    }else{
                        div = n1/n2;
                        printf("The quotient is: %.15lf\n", div);
                        break;
                    }

                case 5:// exp(x)
                    printf("Enter term: ");
                    scanf("%lf", &n1);
                    printf("The result of exp(%.15lf) is: %.15lf\n", n1, exp(n1));
                    break;

                case 6://log(x)
                    printf("Enter term: ");
                    scanf("%lf", &n1);
                    if (n1<=0){
                        printf("Cannot take the log of that number!\n");
                        break;
                    } else {
                    printf("The result of exp(%.15lf) is: %.15lf\n", n1, log(n1));
                    break;
                    }

                case 7://change mode
                    mode = 0;
                    printf("Calculator now works with integers.\n");
                    break;
            }
            }
            if(mode == 0){
            int n1 = 0, n2 = 0, sum, sub, product, div;
            printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - exp(x)\n6 - log(x)\n7 - toggle calculator type\n8 - exit program\nPlease enter your option: ");
            scanf("%d", &n);
            void function(){
                    printf("Enter first term: ");
                    scanf("%d", &n1);
                    printf("Enter second term: ");
                    scanf("%d", &n2);
            }
            if (n > 8 || n < 1){
                printf("Invalid Option.\n");
            }
            switch(n){
                case 1://addition
                    function();
                    sum = n1 + n2;
                    printf("The sum is: %d\n", sum);
                    break;

                case 2://subtraction
                    function();
                    sub = n1 - n2;
                    printf("The difference is: %d\n", sub);
                    break;

                case 3://multiplication
                    function();
                    product = n1*n2;
                    printf("The product is: %d\n", product);
                    break;

                case 4://division
                    function();
                    if(n2 == 0){
                        printf("Cannot divide by zero!\n");
                        break;
                    }else{
                        div = n1/n2;
                        printf("The quotient is: %d\n", div);
                        break;
                    }

                case 5:// exp(x)
                    printf("Cannot calculate with integers.\n");
                    break;

                case 6://log(x)
                    printf("Cannot calculate with integers.\n");
                    break;


                case 7://change mode
                    mode = 0;
                    printf("Calculator now works with doubles.\n");
                    break;
            }
            }
    }
    return 0;
}

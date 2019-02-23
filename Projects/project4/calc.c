//Cameron Cobb
//CS135
//calc.c

#include <stdio.h>

int main(){
    int mode = 1;
    int n;
    printf("This program implements a calculator.\n");
    while (n!=6){
            if(mode == 1){
            double n1 = 0, n2 = 0, sum, sub, product, div;
            printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - toggle calculator type\n6 - exit program\nPlease enter your option: ");
            scanf("%d", &n);
            void function(){
                    printf("Enter first term: ");
                    scanf("%lf", &n1);
                    printf("Enter second term: ");
                    scanf("%lf", &n2);
            }
            if (n > 6 || n < 1){
                printf("Invalid Option.\n");
            }
            switch(n){
                case 1:
                    function();
                    sum = n1 + n2;
                    printf("The sum is: %.15lf\n", sum);
                    break;

                case 2:
                    function();
                    sub = n1 - n2;
                    printf("The difference is: %.15lf\n", sub);
                    break;

                case 3:
                    function();
                    product = n1*n2;
                    printf("The product is: %.15lf\n", product);
                    break;

                case 4:
                    function();
                    if(n2 == 0){
                        printf("Cannot divide by zero!\n");
                        break;
                    }else{
                        div = n1/n2;
                        printf("The quotient is: %.15lf\n", div);
                        break;
                    }

                case 5:
                    mode = 0;
                    printf("Calculator now works with integers.\n");
                    break;
            }
            }
            if(mode == 0){
                    int n1 = 0, n2 = 0, sum, sub, product, div;
            printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - toggle calculator type\n6 - exit program\nPlease enter your option: ");
            scanf("%d", &n);
            void function(){
                    printf("Enter first term: ");
                    scanf("%d", &n1);
                    printf("Enter second term: ");
                    scanf("%d", &n2);
            }
            if (n > 6 || n < 1){
                printf("Invalid Option.\n");
            }
            switch(n){
                case 1:
                    function();
                    sum = n1 + n2;
                    printf("The sum is: %d\n", sum);
                    break;

                case 2:
                    function();
                    sub = n1 - n2;
                    printf("The difference is: %d\n", sub);
                    break;

                case 3:
                    function();
                    product = n1*n2;
                    printf("The product is: %d\n", product);
                    break;

                case 4:
                    function();
                    if(n2 == 0){
                        printf("Cannot divide by zero!\n");
                        break;
                    }else{
                        div = n1/n2;
                        printf("The quotient is: %d\n", div);
                        break;
                    }

                case 5:
                    mode = 1;
                    printf("Calculator now works with doubles.\n");
                    break;

            }
        }
    }
    return 0;
}

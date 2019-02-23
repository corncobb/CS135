//Cameron Cobb
//CS 135
//arrays.c

#include <stdio.h>

int main(){
    int row = 0, col = 0, i = 0, j = 0, n = 0, count[9], occurs = 0;
    printf("This program counts occurrences of digits 0 through 9 in an NxM array.\n");
    printf("Enter the size of the array (Row Column): ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for(i = 0; i < row; i++){
        printf("Enter row %d: ", i);
        for(j = 0; j < col; j++){
        scanf("%d", &arr[i][j]);
        }
    }
    printf("Total counts for each digit:\n");
    for(n = 0; n <= 9; n++){
        occurs = 0;
            for (i = 0; i < row; i++){
                for(j = 0; j < col; j++){
                        if(arr[i][j] == n){
                        occurs++;
                    }
                }
            }
            count[n]=occurs;
            printf("Digit %d occurs %d times.\n", n, count[n]);
    }
    printf("The digit counts directly from the 1D array:\n");
    for(i=0;i < 10; i++){
         printf("%d ", count[i]);
    }
    printf("\nThe original 2D array entered by the user:\n"); //print out block
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
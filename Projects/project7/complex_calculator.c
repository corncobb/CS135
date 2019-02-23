// Cameron Cobb
// CS135
// complex_calculator.c


#include <stdio.h>
#include <stdlib.h>

void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float *real_result, float *imaginary_result){
    *real_result = real_part_1 + real_part_2;
    *imaginary_result = imaginary_part_1 + imaginary_part_2;
}

void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float *real_result, float *imaginary_result){
    *real_result = real_part_1 - real_part_2;
    *imaginary_result = imaginary_part_1 - imaginary_part_2;

}


void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float *real_result, float *imaginary_result){
    float a = 0, b = 0, c = 0, d = 0;
    a = real_part_1 * real_part_2;
    b = real_part_1 * imaginary_part_2;
    c = imaginary_part_1 * real_part_2;
    d = (imaginary_part_1 * imaginary_part_2) * (-1);
    *real_result = a + d;
    *imaginary_result = b + c;

}

void read_num(float *real_part, float *imaginary_part){
    printf("Please type in the real component: ");
    scanf("%f", real_part);
    printf("Please type in the imaginary component: ");
    scanf("%f", imaginary_part);

}

void read_nums(float *real_part_1, float *imaginary_part_1, float *real_part_2, float *imaginary_part_2){
    printf("Reading the first imaginary number...\n");
    read_num(real_part_1, imaginary_part_1);
    printf("Reading the second imaginary number...\n");
    read_num(real_part_2, imaginary_part_2);


}

void print_complex(float real_part, float imaginary_part){
    printf("The operation yields %.3f + %.3f", real_part, imaginary_part);
    printf("i\n");

}

int main(){
    int choice, mode = 1;
    float real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, real_result, imaginary_result;
    printf("Complex Number Arithmetic Program:\n");
    while(mode == 1){
    do{
    printf("1) Add two complex numbers\n2) Subtract two complex numbers\n3) Multiply two complex numbers\n4) Quit\nChoose an option(1 - 4): ");
    scanf("%d", &choice);
    if(choice > 4 || choice < 1){
        printf("Please input a valid menu option\n");
    }
    }while(choice > 4 || choice < 1);



    switch(choice){
        case 1:
            read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
            add(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
            print_complex(real_result, imaginary_result);
            break;
        case 2:
            read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
            subtract(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
            print_complex(real_result, imaginary_result);
            break;
        case 3:
            read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
            multiply(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
            print_complex(real_result, imaginary_result);
            break;
        case 4:
            printf("Bye!\n");
            mode = 0;
            break;

        }
    }
    return 0;
}

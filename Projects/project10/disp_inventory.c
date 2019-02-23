//Cameron Cobb
//CS135
//disp_inventory.c

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
	int part_number, quantity;
	float price;
}product_info;

int main(){
	char namefile[] = "inventory.txt";
   	FILE *fp;

   	product_info A;

	fp = fopen(namefile,"rb");

	if(fp == NULL){
		printf("\nError: Cannot open file");
        	exit(1);
        }
    printf("Below are the items in your inventory.\nPart#   Quantity        Item Price\n");
    while(feof(fp) == false){
		fread(&A, sizeof(product_info),1, fp);
		printf("%5d\t%8d\t$%9.2f\n", A.part_number, A.quantity, A.price);
		if(fread(&A, sizeof(product_info),1, fp) == 0){
			break;
		}
   	}
   	fclose(fp);
   	return 0;
}
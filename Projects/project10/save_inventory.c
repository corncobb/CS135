//Cameron Cobb
//CS135
//save_inventory.c

#include <stdio.h>
#include <stdlib.h>


typedef struct{
	int part_number, quantity;
	float price;
}product_info;

int main(){
	char namefile[] = "inventory.txt";
   	FILE *fp;

   	product_info A = {-1};

	fp = fopen(namefile,"wb");
	
	if(fp == NULL){
		printf("\nError: Cannot open file");
        	exit(1);
        }
        
    	printf("This program stores a business inventory.\n");
    	
    	while(A.part_number != 0){
		printf("Please enter item data (part number, quantity, price): ");
		fflush(stdin);
   		scanf("%d, %d, %f", &A.part_number, &A.quantity, &A.price);
		if(A.part_number != 0){
			fwrite(&A, sizeof(product_info),1, fp);
		}
   	}
   	fclose(fp);
    	printf("Thank you. Inventory stored in file %s.\n", namefile);
   	return 0;
}
// Cameron Cobb
// CS135
// collections.c

#include <stdio.h>



int main(){
    int volume1, price1;
    int volume2, price2;
    int volume3, price3;
    int budget;


    printf("Enter volumes and price per volume for collection 1: ");
    scanf("%d %d", &volume1, &price1);

    printf("Enter volumes and price per volume for collection 2: ");
    scanf("%d %d", &volume2, &price2);

    printf("Enter volumes and price per volume for collection 3: ");
    scanf("%d %d", &volume3, &price3);

    printf("Enter Bob\'s budget: ");
    scanf("%d", &budget);

    int total1 = volume1*price1;
    int total2 = volume2*price2;
    int total3 = volume3*price3;

    if(budget > 0){
        printf("(1) Bob has some money to buy collections.");
    } else {
        printf("\n(1) Bob does not have money to buy anything.");
    }

    /*******************************************************************/

    if(((total1 > budget) && (total2 > budget)) || ((total1 > budget) && (total3 > budget)) || ((total2 > budget) && (total3 > budget))){
        printf("\n(2) At least two collections are more expensive than Bob’s budget.");
    } else {
        printf("\n(2) At least two collections are cheaper than or equal to Bob\'s budget.");
    }

    /*******************************************************************/

    if((total1 == total2) && (total2 == total3) && (total1 == total3)){
        printf("\n(3) All the collections cost the same.");
    } else if ((total1 == total2) && (total2 == total3) || (total1 == total2) && (total1 == total3)){
        printf("\n(3) Only two collections cost the same amount of money.");
    } else {
        printf("\n(3) No collections have the same price.");
    }

    /*********************************************************************/
// Only one collection is cheaper
    if (((total1 <= budget) && (total2 > budget) && (total3 > budget)) || ((total2 <= budget) && (total1 > budget) && (total3 > budget)) || ((total3 <= budget) && (total1 > budget) && (total2 > budget))){
        printf("\n(4) Only one collection is cheaper than or equal to Bob\'s budget.");
    } else {
        printf("\n(4) More than one collection is cheaper than or equal to Bob\'s budget or they are all more expensive.");
    }
    /************************************************************************/
    if ((total1 + total2 + total3) <= budget){
        printf("\n(5) Bob can buy all three collections.");
    } else if (((total1 + total2) <= budget) && ((total2 + total3) <= budget) || ((total1 + total2) <= budget) && ((total1 + total3) <= budget)){
        printf("\n(5) Bob can only buy two of the collections.");
    } else if ((total1 <= budget) || (total2 <= budget) || (total3 <= budget)){
        printf("\n(5) Bob can only buy one collection.");
    } else {
        printf("\n(5) Bob cannot buy any collection.");

    }
}


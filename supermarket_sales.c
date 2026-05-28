#include <stdio.h>

int main(){

    //initializing variables
    int rice_sold, oil_sold, sugar_sold;
    float riceCost, oilCost, sugarCost, total, average;

    //accepting user input
    printf("Enter the quantity of rice sold: ");
    scanf("%d",&rice_sold);
    printf("Enter the quantity of oil sold: ");
    scanf("%d",&oil_sold);
    printf("Enter the quantity of sugar sold: ");
    scanf("%d",&sugar_sold);

    //operations
    /* cost per product
    rice = 120
    oil = 45
    sugar= 30*/
    riceCost = rice_sold*120;
    oilCost = oil_sold*45;
    sugarCost = sugar_sold*30;
    total = riceCost + oilCost + sugarCost;
    average = total/3;

    //display
    printf("======Daily Sales Report======\n");
    printf("Quantity of rice sold : %d   ||  Sales of rice : %.2fGHS\n",rice_sold, riceCost);
    printf("Quantity of oil sold  : %d   ||  Sales of oil  : %.2fGHS\n",oil_sold, oilCost);
    printf("Quantity of sugar sold: %d   ||  Sales of sugar: %.2fGHS\n",sugar_sold, sugarCost);
    printf("Total daily sales  : %.2fGHS ||  Average sales : %.2fGHS\n", total, average);

    return 0;
}

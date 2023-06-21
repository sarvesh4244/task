#include <stdio.h>

int main()
{
    int intrest, year;
    float amount;
    printf("enter the total amount : ");
    scanf("%f", &amount);
    printf("enter the amount of intrest :");
    scanf("%d", &intrest);
    printf("enter the year : ");
    scanf("%d", &year);
    amount = amount * (intrest / 100 * year);
    printf("the total inrest amount will be : %2lf", amount);
    return 0;
}
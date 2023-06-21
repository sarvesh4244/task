#include <stdio.h>
int main()
{
    int pur, sell, total;

    printf("enter the real value : ");
    scanf("%d", &pur);
    printf("enter the selloing value : ");
    scanf("%d", &sell);
    total = sell - pur;
    if (total >= 0)
    {
        printf(" %d is the profit of the selling produt.", total);
    }
    else
    {
        printf("there is loos in selling product of %d", total);
    }

    return 0;
}
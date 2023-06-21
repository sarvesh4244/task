#include <stdio.h>

int main()
{
    int total = 0, pizza, mo, quntity;
    printf("wellcome to pizzahut.");
rep:
    printf("----------MENU----------\n1) PIZZET CAPRESE : 250.\n2) EXTRA LARGE PIE : 200.\n3) WHOLE WHEAT CRUST : 300.\n4) HAM & PINEAPPLE : 350\n5) TRIPLE CHEESE PIZZA : 400.\n");
    scanf("%d", &pizza);
    printf("you had selected the pizza.\n");
    switch (pizza)
    {
    case 1:
        pizza = 250;
        printf("enter the quantitiy : ");
        scanf("%d", &quntity);
        pizza = pizza * quntity;
        total += pizza;
        printf("you total is %d\n", total);
        printf("do you need to buy more ? 1 = yes and 2 = no ");
        scanf("%d", &mo);
        if (mo == 1)
        {
            goto rep;
        }
        else
        {

            break;
        }
    case 2:
        pizza = 200;
        printf("enter the quantitiy : ");
        scanf("%d", &quntity);
        pizza = pizza * quntity;
        total += pizza;
        printf("you total is %d\n", total);
        printf("do you need to buy more ? 1 = yes and 2 = no ");
        scanf("%d", &mo);
        if (mo == 1)
        {

            goto rep;
        }
        else
        {

            break;
        }

    case 3:
        pizza = 300;
        printf("enter the quantitiy : ");
        scanf("%d", &quntity);
        pizza = pizza * quntity;
        total += pizza;
        printf("you total is %d\n", total);
        printf("do you need to buy more ? 1 = yes and 2 = no ");
        scanf("%d", &mo);
        if (mo == 1)
        {

            goto rep;
        }
        else
        {

            break;
        }

    case 4:
        pizza = 350;
        printf("enter the quantitiy : ");
        scanf("%d", &quntity);
        pizza = pizza * quntity;
        total += pizza;
        printf("you total is %d\n", total);
        printf("do you need to buy more ? 1 = yes and 2 = no ");
        scanf("%d", &mo);
        if (mo == 1)
        {

            goto rep;
        }
        else
        {

            break;
        }

    case 5:
        pizza = 400;
        printf("enter the quantitiy : ");
        scanf("%d", &quntity);
        pizza = pizza * quntity;
        total += pizza;
        printf("you total is %d\n", total);
        printf("do you need to buy more ? 1 = yes and 2 = no ");
        scanf("%d", &mo);
        if (mo == 1)
        {

            goto rep;
        }
        else
        {

            break;
        }
    default:
        goto rep;
        break;
    }
    printf("your total was just %d  only.\nenjoy your meal,thank you.", total);

    return 0;
}
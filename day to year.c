#include <stdio.h>
int main()
{
    int days=0, years=0, option, i, leap=0;
    printf("wellcome to days finder or year finder.\n");
    printf("enter the option :\n1) for day to year.\n2)year to days.\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("enter the number of DAYS : ");
        scanf("%d", &days);
        years = days / 365;
        printf("the days to year is : %d", years);
        break;
    case 2:
        printf("enter the number of YEARS : ");
        scanf("%d", &days);
        leap = years / 4;
        days = 365;
        printf("the year is : %d", years * 365 + leap);
        break;
    default:
        printf("TRY THE VALID OPTION");
        break;
    }

    printf("\nTHANK YOU.");

    return 0;
}
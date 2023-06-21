#include <stdio.h>
int main()
{
    int year;
    printf("wellcome to leap year finder.\n");
    printf("enter the year.");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("it is an leap year.");
    }
    else
    {
        printf("not an leap year.");
    }

    return 0;
}

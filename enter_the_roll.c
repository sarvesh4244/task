#include <stdio.h>
int main()
{
    int roll, acc, tax, bus, total;
    char name;
    printf("enter the number between 1 and 2.");
    scanf("%d", &roll);
    switch (roll)
    {
    case 1:
        printf("name is sarvesh\n");
        printf("marks in accounts is 95\n");
        printf("marks in tax is 90\n");
        printf("marks in bussiness studies is 100\n");
        printf("total of all three is %d\n", 95 + 90 + 100);
        printf("percentage of three is %d\n", 95 + 90 + 100 / 300 * 100);
        printf("your division is a\n");
        break;
    case 2:
        printf("name is raj\n");
        printf("marks in accounts is 90\n");
        printf("marks in tax is 95\n");
        printf("marks in bussiness studies is 95\n");
        printf("total of all three is %d\n", 95 + 90 + 95);
        printf("percentage of three is %d\n", 95 + 90 + 95 / 300 * 100);
        printf("your division is a\n");
        break;
    default:
        printf("enter beteween 1 and 2.");
        break;
    }

    return 0;
}
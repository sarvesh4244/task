#include <stdio.h>
int swap(int *x, int *y);

int main()
{
    int a, b;
    printf("enter the first numebr : ");
    scanf("%d", &a);
    printf("enter the Second numebr : ");
    scanf("%d", &b);
    printf(" number first %d and number second %d befor sqaping.\n", a, b);
    swap(&a, &b);
    printf("the number after swaoing , first is %d and second %d", a, b);
    return 0;
}

int swap(int *x, int *y)
{
    int c;
    c = *x;
    *x = *y;
    *y = c;
}
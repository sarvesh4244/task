#include <stdio.h>
int square();
int main()
{
    int nu = 0;
    printf("enter the numebr : ");
    scanf("%d", &nu);
    square(nu);
    return 0;
}

int square(int a)
{
    int s = a * a;
    printf("square of two number is %d", s);
}
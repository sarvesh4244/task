#include <stdio.h>
int od(int a);

int main()
{
    int n1;
    printf("enter the number :");
    scanf("%d", &n1);
    od(n1);
    return 0;
}
int od(int a)
{
    if (a % 2 == 0)
    {
        printf("the number is even %d", a);
    }
    else
    {
        printf("the number is odd %d", a);
    }
}
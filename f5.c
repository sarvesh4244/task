#include <stdio.h>

int fi(int a);
int main()
{
    int n1;
    printf("enter the number : ");
    scanf("%d", &n1);
    fi(n1);
    return 0;
}

int fi(int a)
{
    int b = 1, c, total = 1;
    for (c = 2; c <= a; c++)
    {
        total += c;
    }
    printf("%d is the total.", total);
}
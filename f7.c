#include <stdio.h>
int prime(int a);
int main()
{
    int s, w;
    printf("enter the numebr : ");
    scanf("%d", &s);
    w = prime(s);
    if (w == 1)
    {
        printf("%d is prime number. ", s);
    }
    else
    {
        printf("%d is not prime number", s);
    }

    return 0;
}
int prime(int a)
{
    int i = 2;
    while (i <= a / 2)
    {
        if (a % i == 0)
        {
            printf("it is not prime");
            break;
        }
        else
        {
            i++;
        }
    }
    return 1;
}
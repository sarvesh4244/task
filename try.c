#include <stdio.h>
int main()
{
    char b, a = "`";

    for (b = '-'; a >= b; b++)
    {
        if (a == b)
        {
            printf("the number is alphabet is  : %c", a);
        }
    }
    return 0;
}
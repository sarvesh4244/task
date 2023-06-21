#include <stdio.h>
int main()
{
    int i, total = 0;
    for (i = 1; i <= 10; i++)
    {
        total = total + i;
    }
    printf("the value of sum if ten numbers is %d", total);
    return 0;
}

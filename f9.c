#include <stdio.h>
int maxmin();
int main()
{
    int max[10000];
    int nu, maxnumber;
    printf("enter how many number you want to add : ");
    scanf("%d", &nu);
    for (int i = 0; i < nu; i++)
    {
        printf("enter the number value for %d ", i + 1);
        scanf("%d", &max[i]);
    }
    maxmin(max, nu);
    return 0;
}
int maxmin(int a[], int b)
{
    int i, max = a[0], min, realmin = a[0];
    for (i = 1; i < b; i++)
    {
        min = a[i];
        if (min > max)
        {
            max = min;
        }
        else if (realmin > min)
        {
            realmin = min;
        }
    }
    printf("the maximum number between these two is %d.\n", max);
    printf("the minimum number between these two is %d.\n", realmin);
}
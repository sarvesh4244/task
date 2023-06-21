#include <stdio.h>
int maxelement();
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
    maxnumber = maxelement(max, nu);
    printf("the max number in all elements is : %d", maxnumber);
    return 0;
}
int maxelement(int a[], int b)
{
    int i, max = a[0], min;
    for (i = 1; i < b; i++)
    {
        min = a[i];
        if (min > max)
        {
            max = min;
        }
    }
    return max;
}
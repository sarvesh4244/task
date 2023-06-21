#include <stdio.h>
int main()
{
    int l,w,b,h; 
    float r;
    printf("------------circle-------------");
    printf("enter the R : ");
    scanf("%f",&r);
    printf(" %f\n",3.14*r*r);
    printf("------------rectangle-------------\n");
    printf("enter the L :");
    scanf("%d",&l);
    printf("enter the B :");
    scanf("%d",&w);
    printf("area of rectangle is %d",l*w);
    printf("\n------------tringle-------------\n");
    printf("enter the B :");
    scanf("%d",&l);
    printf("enter the H :");
    scanf("%d",&w);
    printf("area of rectangle is %d",l*w);
    return 0;
}
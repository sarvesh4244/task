#include<stdio.h>
float cicle(int a);
int main(){

    int r;float area;
    printf("enter the calue of  r");
    scanf("%d",&r);
    area = cicle(r);
    printf("the area of circle is %f",area);
    return 0;
}

float cicle(int a)
{
    return 3.14*a*a;
}


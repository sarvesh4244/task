#include <stdio.h>
int main()
{
    int a, b;
    char s;
    printf("enter the sign : ");
    scanf("%c", &s);
    printf("enter the first number : ");
    scanf("%d", &a);
    printf("enter the second number : ");
    scanf("%d", &b);
    switch (s)
    {
    case '+':
        printf("the sum of two number is : %d", a + b);
        break;
    case '-':
        printf("the sub of two number is : %d", a - b);
        break;
    case '*':
        printf("the multiplication of two number is : %d", a * b);
        break;
    case '/':
        printf("the division of two number is : %d", a / b);
        break;
    case '%':
        printf("the moduls of two number is : %d", a % b);
        break;
        default:
        printf("enter the coorect value.");
        break;
    }
    return 0;
}
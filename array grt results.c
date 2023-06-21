#include <stdio.h>
int main()
{
    int result[] = {1, 55, 56, 45, 156, 2, 48, 75, 98, 221, 3, 46, 48, 23, 117, 4, 78, 98, 78, 254, 5, 65, 85, 35, 185};
    char name[][20] = {"Sarvesh Vaishnani", "raj savaliya", "vasu kakadiya", "tej gajera", "nishit bhrambhhat"};
    int roll, re, i;
    printf("enter the rool numebr beetween 1 to 5 : ");
    scanf("%d", &roll);
    for (re = 0; re < 25; re += 5)
    {
        i = result[re];
        if (roll == i)
        {
            printf("your roll number is %d", roll);
            printf("\nyour name is : %s", name[(roll - 1)]);
            printf("\nyour marks in maths is %d", result[re + 1]);
            printf("\nyour marks in physics%d", result[re + 2]);
            printf("\nyour marks in accounts %d", result[re + 3]);
            printf("\nyour total is %d", result[re + 4]);
        }

        if (re >= 25)
        {

            break;
        }
    }
    return 0;
}
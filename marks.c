/* Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or
Total in Maths and Physics >=140 */
#include <stdio.h>

int main()
{
    int maths, phy, chem, total1, total2, loo;

    printf("enter the marks for maths");
    scanf("%d", &maths);
    printf("enter the marks for phy");
    scanf("%d", &phy);
    printf("enter the marks for chemestry");
    scanf("%d", &chem);
    total1 = maths + phy + chem;
    total2 = maths + phy;

    if (maths >= 65 && phy >= 55 && chem >= 50)
    {
        if (total1 >= 190)
        {
            printf("you are eligible for addmition.");
        }
    }
    else if (total2 >= 140)
    {
        printf("you are eligible for addmition.");
    }
    else
    {
        printf("you are not eligible.");
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int phy, che, maths, total1, total2;
    maths = 72;
    phy = 65;
    che = 51;
    total1 = phy + che + maths;
    total2 = maths + phy;

    if (total1 >= 188)
    {
        printf("you are eligible.");
    }
    else if (total2 >= 137)
    {
        printf("you are eligible.");
    }
    else
    {
        printf("you are not eligible.");
    }

    return 0;
}

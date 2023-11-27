#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the 3 subject marks:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= 33 && b >= 33 && c >= 33 && a <= 100 && b <= 100 && c <= 100)
    {
        if (40 <= (a + b + c) / 3)
        {
            printf("You are pass");
        }
        else
        {
            printf("your are fail");
        }
    }
    else
    {
        printf("Your are fail or you enter wrong input");
    }
}
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter four number:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("First number is the greatest:%d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("Second number is the greatest:%d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("third number is the greatest:%d", c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("fourth number is the greatest:%d", d);
    }
    else
    {
        printf("you enter wrong input");
    }
    return 0;
}
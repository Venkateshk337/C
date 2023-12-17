#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1;
    printf("Enter the number:");
    scanf("%d", &num1);
    int poly = 0, num2=num1;
    int poly1;
    do
    {
        poly1 = num1 % 10;
        poly = poly * 10 + poly1;
        num1=num1/10;
    } while (num1 != 0);
    if (poly == num2)
        printf("Enter the number is polynomial");
    else
        printf("Enter the number not polynomial");
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two integer:\n");
    scanf("%d%d", &a, &b);
    printf("\n Enter  \n1.Multiplication\n 2.Division\n3.Addition\n 4.Substraction\n5.Remainder\n");
    int c;
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("%d*%d=%d", a, b, a * b);
        break;
    case 2:
        printf("%d/%d=%d", a, b, a / b);
        break;
    case 3:
        printf("%d+%d=%d", a, b, a + b);
        break;
    case 4:
        printf("%d-%d=%d", a, b, a - b);
        break;
    case 5:
        printf("%d\%%%d=%d", a, b, a % b);
        break;
    default:
        printf("You enter the wrong choss");
    }
    return 0;
}
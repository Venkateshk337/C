#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, gcd;
    printf("Enter two number:\n");
    scanf("%d%d", &num1, &num2);
    do
    {
        gcd = num1 % num2;
        int temp = num2;
        num2 = gcd;
        num1 = temp;

    } while (gcd != 0);
    printf("gcd of numbers:%d", num1);
    return 0;
}

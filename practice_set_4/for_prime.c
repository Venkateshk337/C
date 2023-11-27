#include <stdio.h>
int main()
{
    int a, prime = 0;
    printf("Enter the number:\n");
    scanf("%d", &a);
    if (a <= 1)
    {
        printf("Enter number is not prime number");
    }
    else
    {
        for (int i=2; i < a; i++)
        {
            if (a % i == 0)
            {
                prime = 1;
            }
        }
    }
    if (prime == 1)
    {
        printf("Enter number is not prime number");
    }
    else
    {
        printf("Enter number is prime number");
    }
}
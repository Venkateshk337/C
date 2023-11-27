#include <stdio.h>
int main()
{
    int a, prime = 0, i = 2;
    printf("Enter the number:\n");
    scanf("%d", &a);
    while (i*i <= a)
    {
        i++;
        if (a % i == 0){
            prime = 1;
            break;}
          
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
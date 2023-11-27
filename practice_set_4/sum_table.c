#include <stdio.h>
int main()
{
    int s, n = 0;
    printf("Enter the number:\n");
    scanf("%d", &s);
    int i = 1;
    for (; i <= 10; i++)
    {
        n = n + (s * i);
    }
    printf("sum of %d table is:%d", s, n);
}
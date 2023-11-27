#include <stdio.h>
#include <time.h>
#define Pi 3.14
int main()
{
    int a;
    printf("Enter the table Number:");
    scanf("%d", &a);
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("\n %d*%d=%d", a, i, a * i);
    }
    printf("Pi=%f", Pi);
    return 0;
}
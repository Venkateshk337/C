#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    printf("Enter 0 for printing trinangular pyaramid pattern and 1 to print reverse triangular pattern:\n");
    int pattern = 1;
    scanf("%d", &pattern);
    if (pattern == 1)
    {
        for (int i = rows; 0 < i; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

else if (pattern == 0)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
}

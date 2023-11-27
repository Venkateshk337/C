#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the obtained marks:\n");
    scanf("%d", &marks);
    if (marks  >= 90 && marks <= 100)
    {
        printf("You got 'A' grade");
    }
    else if (marks  >= 80 && marks < 90)
    {
        printf("You got 'B' grade");
    }
    else if (marks  >= 70 && marks < 80)
    {
        printf("You got 'C' grade");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("You got 'D' grade");
    }
    else if (marks < 60)
    {
        printf("You got 'F' grade");
    }
    else
    {
        printf("You enter the wrong marks");
    }

    return 0;
}

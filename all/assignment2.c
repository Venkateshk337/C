#include <stdio.h>
int main()
{
    printf("Enter below option to convert\n");
    printf("1.kms to miles\n 2.inches to foot \n3.cms to inches\n 4.pounds to kgs\n 5.inches to metera\n");
    int a;
    scanf("%d", &a);
    float b;
   /* if (a == 1)
    {
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d kms=%f miles", b, .621371 * b);
    }

    else if (a == 2)
    {
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d inches=%f foot", b, .08333333 * b);
    }

    else if (a == 3)
    {
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d cms=%f inch", b, b * .39370079);
    }
    else if (a == 4)
    {
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d pounds=%f kgs ", b, b * .45359237);
    }

    else if (a == 5)
    {
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d inches=%f meters", b, b * .0254);
    }
    else
    {
        printf("Enter the convertion data not found");
    }*/
    switch (a)
    {
    case 1:
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d kms=%f miles", b, .621371 * b);
        break;
    case 2:
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d inches=%f foot", b, .08333333 * b);
        break;
    case 3:
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d cms=%f inch", b, b * .39370079);
        break;
    case 4:
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d pounds=%f kgs ", b, b * .45359237);
        break;
    case 5:
        printf("Enter the value to convert:");
        scanf("%d", &b);
        printf("%d inches=%f meters", b, b * .0254);
        break;

    default:
        printf("Enter the convertion data not found");
        break;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int pri,year,rate;
    float inte;
    
    printf("Enter the principle:\n");
    scanf("%d",&pri);
    printf("Enter the year:\n");
    scanf("%d",&year);
    printf("Enter the rate:\n");
    scanf("%d",&rate);
    inte=pri*year*rate;
    inte=inte/100;
    printf("Enter the Simple Interest=%.4f",inte);
    
    return 0;
}
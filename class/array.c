#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=a;
    printf("%d %u %d",&a[0+1],a+1,p);
}
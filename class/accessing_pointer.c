#include<stdio.h>
int main()
{
    int a,b;
    int c=5;
    int *p;
    a=4*(c+5);
    p=&c;
    b=4*(*p+5);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    *p=25;
    printf("c=%d",c);
}
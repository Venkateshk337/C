#include<stdio.h>
int main()
{    //same variable to different pointer
    // int a=10;
    // int *p=&a;
    // int *q=&a;
    // int *r=&a;
    // int *s=r;
    // *s=20;
    // printf("p=%d\n",*p);
    // printf("q=%d\n",*q);
    // printf("r=%d\n",*r);
    // printf("s=%d",*s);



    //Different varible to same pointer
    int a=10;
    int b=20;
    int c=30;
    int *p;
    p=&a;
    printf("p=%d\n",*p);
    p=&b;
    printf("p=%d\n",*p);
    p=&c;
    printf("p=%d\n",*p);

}
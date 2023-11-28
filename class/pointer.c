#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    // value of a
    printf("a=%d\n",a);
    printf("*p=%d\n",*p);
    // address of a
    printf("&a=%d\n",&a);
    printf("p=%d\n",p);
    // address of pointer *p
    printf("&p=%d\n",&p);
     // address of a
    printf("*&p=%d\n",*(&p));
    // value of a
    printf("**q=%d\n",**q);
    // address of **q
    printf("&q=%d\n",&q);
    // address of a
    printf("*q=%d\n",*q);
    // address of pointer *p
    printf("q=%d\n",q);
}
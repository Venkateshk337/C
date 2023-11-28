#include <stdio.h>
int main()
{
int a=6;
int b=2;
int c=10;
int *p;

p=&b;// p=2,b=2
int *q=p;//q=2,p=2
int *r=&c;//r=10,c=10
p=&a;//p=6,b=6
*q=8;//p=8,q=8
 *r=*p;//r=8,c=8
*r=a+*q+*&c;
printf("*r=%d",*r);
}
//wrong assumption
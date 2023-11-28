#include<stdio.h>
int main()
{
    char c='A';
    int i=65;
    char *p;
    int *p1;
    p=&c;
    p1=&i;
    printf("%c\n",*p);
    printf("%c\n",*p1);
    printf("%d\n",*p1);

}
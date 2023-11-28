#include <stdio.h>
int main() 
{
    // all pointer holds same size in c
 char c;
 char *p;
 p=&c;
 
 int i;
 int *p1;
 p1=&i;
 float f;
float *p2;
p2=&f;
printf("Size of c = %d\n",sizeof(c));
printf("Size of p = %d\n",sizeof(p));
printf("Size of i = %d\n",sizeof(i));
printf("Size of p1 = %d\n",sizeof(p1));
printf("Size of f = %d\n",sizeof(f));
printf("Size of p2 = %d\n",sizeof(p2));
}
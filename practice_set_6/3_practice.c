#include<stdio.h>
int ten(int *a);
int main(){
    int a=10;
ten(&a);
printf("a value is=%d",a);
}
int ten(int *a)
{
    *a=*a*10;
    printf("10 * %d=%d\n",*a,*a);
return *a*10;
}
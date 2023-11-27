#include<stdio.h>
int main(){
    int a=10;
    printf("a value=%d\n",a);
    printf("Address of a=%d\n",&a);
    int *p=&a;
    printf("*p=%d\n",*p);
    printf("&p=%d\n",&p);
}
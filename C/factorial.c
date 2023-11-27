#include<stdio.h>
int main(){
int i;
printf("enter the no\n");
scanf("%d",&i);
int j;
int s=1;
for(int j=1;j<=i;j++){
    s=j*s;
    printf("Factorial of no %d is=%d\n",j,s);
}

    return 0;
}
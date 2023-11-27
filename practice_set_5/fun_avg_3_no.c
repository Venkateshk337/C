#include<stdio.h>
int avg();
int main()
{
int x,y,z;
printf("Enter three numbers:\n");
scanf("%d%d%d",&x,&y,&z);
avg(x,y,z);
    return 0;
}
int avg(int a,int b, int c){
   int avga=(a+b+c)/3;
    printf("Average of three number is=%d\n",avga);
    return 1;
}
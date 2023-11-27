#include<stdio.h>
int main()
{
    int s,n=1;
    printf("Enter the number:\n");
    scanf("%d",&s);
    int i=1;
    if(s==0){
        printf("Factorial of number %d is=1",s);
    }
    else{
    while( i<=s){
        
            n=n*i;
            i++;
    }
    printf("Factorial of number %d is=%d",s,n);
    }
}
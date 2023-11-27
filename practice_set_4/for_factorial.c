#include<stdio.h>
int main()
{
    int s,n=1;
    printf("Enter the number:\n");
    scanf("%d",&s);
    if(s==0){
        printf("Factorial of number %d is=1",s);
    }
    else{
    for(int i=1 ;i<=s;i++){
        
            n=n*i;
    }
    printf("Factorial of number %d is=%d",s,n);
    }
}
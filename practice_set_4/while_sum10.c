#include<stdio.h>
int main(){
    int n=0;
    int s;
    printf("Enter the number:\n");
    scanf("%d",&s);
    int i=0;
    do{
        n=n+i;
        
        i++;
    }
    while(i<=s);
    printf("Sum of %d natural number=%d",s,n);
    return 0;

}
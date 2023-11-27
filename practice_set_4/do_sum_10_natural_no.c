#include<stdio.h>
int main(){
    int n=1;
    int i;
    printf("Enter the number:\n");
    scanf("%d",&i);
    int s=0;
    while(n<=i){
s=s+n;
n++;
    }
    printf("sum of %d natural number is=%d",i,s);

}
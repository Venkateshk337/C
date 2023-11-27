#include<stdio.h>
void main(){
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a%97==0){
        printf("Number %d is divisible by 97",a);
    }
    else{
         printf("Number %d  is not divisible by 97",a);
    }
    
}
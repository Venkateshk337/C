#include<stdio.h>
int main(){
    int n;
    printf("Enter the multiplication table number:\n");
    scanf("%d",&n);
    int i=10;
    for(;i;i--){
        printf("%d * %d =%d\n",n,i,n*i);
      
        
    }
}
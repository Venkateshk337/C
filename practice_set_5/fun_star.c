#include<stdio.h>
void star();
int main()
{
star(20);
    return 0;
}
void star(int n){
    if(n==1){
        printf("*\n");
        return;
    }
    star(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}
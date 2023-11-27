#include<stdio.h>
int main()
{
    int a[10];
    int *ptr=a;
    for(int i=0;i<10;i++){
        printf("Enter value of %d: \n",i+1);
        scanf("%d",&a[i]);
       
    }
   
    return 0;
}
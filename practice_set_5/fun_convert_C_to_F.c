#include<stdio.h>
int temp(int c);
int main()
{
    int a;
    printf("Enter the celcius:\n");
    scanf("%d",&a);
    temp(a);

    return 0;
}
int temp(int c){
   float F=(c*9/5)+32;
    printf("%d Celcius=%.2f Farenheit\n",c,F);
    return F;
}
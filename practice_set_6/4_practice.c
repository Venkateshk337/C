#include<stdio.h>
int avg_and_sum(int *a,int *b,int *sum,int *avg);
int main()
{
    int x=10,y=20,p,q;
    avg_and_sum(&x,&y,&p,&q);

}
int avg_and_sum(int *a,int *b,int *sum,int *avg){
    *sum=*a+*b;
    *avg=(*sum)/2;
    printf("sum of %d and %d is %d\n",*a,*b,*sum);
    printf("Average of %d and %d is %d\n",*a,*b,*avg);
    return 0;


}
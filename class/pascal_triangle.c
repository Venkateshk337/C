#include<stdio.h>
#define N 10
int main(){
static int pascal[N][N];
int i=0,j=0;
int n=5;
for(i;i<n;i++){
    printf("\n");
    for(j=0;j<=i;j++){
        if(i==j||j==0||i==n-1)
        pascal[i][j]=1;
        else{
        pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];}
        printf("%d ",pascal[i][j]);
    }
}
}

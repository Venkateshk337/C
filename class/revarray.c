#include<stdio.h>
#define swap(a,b,t) ((t)=(a),(a)=(b),(b)=(t))
int array_rev(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(int i=0;i<n/2;i++){
        int temp;
        swap(a[i],a[n-1-i],temp);
    }

}
int main(){
    printf("Enter the size of array:");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    array_rev(a,n);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
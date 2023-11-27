#include<stdio.h>
int main()
{
printf("Enter what you find:\n 1.Area of circle \n 2.Volume of Cylinder\n");
int a;
const float Pi=3.14;
scanf("%d",&a);
printf("Enter the radius:\n");
int radius;
scanf("%d",&radius);
if(a==1){
printf("Area of circle is=%.4f",Pi*radius*radius);
}
else if (a==2){
    printf("Enter the height of Cylider:\n");
    int height;
    scanf("%d",&height);
printf("Volume of Cylinder=%.4f",Pi*radius*radius*height);
}
    return 0;
}
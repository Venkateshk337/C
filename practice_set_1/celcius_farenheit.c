#include<stdio.h>
int main(){
printf("Enter Celcius : ");
float celcius;
scanf("%f",&celcius);
float Farenheit=(celcius*9/5)+32;
printf("%f Celcius=%.4f Farenheit",celcius,Farenheit);
    return 0;
}
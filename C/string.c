#include<stdio.h>
#include<string.h>
int main(){
    char c1[20],c2[20];
    char c3[20];
    gets(c1);
    gets(c2);
    printf("%d",strlen(c1));
    printf("%d",strcmp(c1,c2));
    strcpy(c3,c1);
    puts(c3);
    strcat(c1,c2);
    puts(c1);
    printf("%s",strstr(c3,c2));
}
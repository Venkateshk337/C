#include<stdio.h>
int main()
    {
        char ch;
        printf("Enter the charecter:\n");
        scanf("%c",&ch);
        if(ch>=97 && ch<=122){
            printf("%d\n",ch);
        printf("Enter charecter is lower case\n");}
        else{
        printf("Enter charectare is not lower case");}
        return 0;
    }
#include <stdio.h>
#include <string.h>
typedef struct book
{
    char name[30];
    int price;
    int pages;
    char author[40];
} bo;
typedef union employ
{
    char name[34];
    int salray;
    char email_id;
} em;
int main()
{
    struct book b1 = {"c progrmming", 30, 300, "venkatesh"};
    printf("%s\n", b1.name);
    printf("%d\n", b1.price);
    printf("%d\n", b1.pages);
    printf("%s\n", b1.author);
    bo b2 = {"p progrmming", 300, 30, "venkatesh k"};
    printf("%s\n", b2.name);
    printf("%d\n", b2.price);
    printf("%d\n", b2.pages);
    printf("%s\n", b2.author);

    em em1;
    strcpy(em1.name, "Arun");
    em1.salray = 1000;
    printf("%s\n", em1.name);

    printf("%d\n", em1.salray);
}
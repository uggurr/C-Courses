#include <stdio.h>
#include <stdlib.h>



int main()
{
    char a[50]="ahmet";
    char *b;

    b = a;
    printf("dizinin 1. karakteri %c\n",a[0]);
    printf("pointer dizinin 1. karakteri %c\n",*(b));
    printf("dizinin 5. Karakteri %c\n",a[4]);
    printf("pointer dizinin 5. adresi %c\n",*(b + 4));
}
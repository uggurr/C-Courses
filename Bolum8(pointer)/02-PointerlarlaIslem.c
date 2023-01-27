#include <stdlib.h>
#include <stdio.h>



int main()
{
    int *a, *b;
    int c;

    c = 10;
    a = &c;
    b = a;

    printf("%d\n",*a);
    printf("%d\n",a);
    printf("%d\n",*b);
    printf("%d\n",b);
    printf("%d\n",c);

    printf("***************\n");

    c = 2;
    printf("%d\n",*a);
    printf("%d\n",a);
    printf("%d\n",*b);
    printf("%d\n",b);
    printf("%d\n",c);

    printf("***************\n");

    *a = 4;
    printf("%d\n",*a);
    printf("%d\n",a);
    printf("%d\n",*b);
    printf("%d\n",b);
    printf("%d\n",c);

    printf("***************\n");

    *b = 6;
    printf("%d\n",*a);
    printf("%d\n",a);
    printf("%d\n",*b);
    printf("%d\n",b);
    printf("%d\n",c);
}
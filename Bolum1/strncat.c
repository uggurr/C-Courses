#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char a[100];
    char b[100];

    int c;

    printf("lutfen bir yazi giriniz\n");
    scanf("%s",&a);

    printf("lutfen ikinci sayiyi giriniz\n");
    scanf("%s",&b);

    printf("kac karakter eklensin: ");
    scanf("%d",&c);

    printf("birlestirmeden once: %s\n",a);
    strncat(a,b,c);
    printf("Birlestirmeden sonra: %s\n",a);
}
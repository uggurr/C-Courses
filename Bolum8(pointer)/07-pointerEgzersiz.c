#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen bir kelimenin pallindrom 
(tersten okunduğu zaman aynı olan kelimeler.)
olup olmadığını kontrol eden programı yazınız. */

int main()
{
    char p[50];
    int i;

    printf("Lutfen bir kelime giriniz: ");
    gets(p);
    
    char *a;
    char *b;

    a = p;
    b = p;

    while (*b)
        b++;
    b--;

    i = 0;
    while (a<b)
    {
        if (*a != *b)
        {
            i = 1;
        }
        b--;
        a++;
    }
    
    if (i == 1)
        printf("polindrom degildir");
    else
        printf("polindromdur");
}
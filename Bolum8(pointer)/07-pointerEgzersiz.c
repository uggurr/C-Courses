#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen bir kelimenin pallindrom 
(tersten okunduğu zaman aynı olan kelimeler.)
olup olmadığını kontrol eden programı yazınız. */

int get_len(char *p)
{
    int i;

    i = 0;
    while (p[i] != '\0')
        i++;
    return (i);
}

void pallindrom(char *p,int *i)
{
    int j;
    j = 0;
    *i--;
    while (j < *i)
    {
        if (p[j] != p[*i])
        {
            printf("Pallindrom değildir");
        }
        j++;
        i++;
    }
    printf("pallindromdur.");
    
}

int main()
{
    char p[50];
    int i;
    printf("Lutfen bir kelime giriniz: ");
    gets(p);
    i = get_len(p);
    pallindrom(p,&i);
}
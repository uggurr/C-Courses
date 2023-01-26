#include <stdio.h>
#include <stdlib.h>

/*2 adet adet fonksiyon yazın. 
1- Karakter dizisinin boyunu hesaplayan bir fonksiyon 
yazın. (adresleriyle çağırma yöntemi ile)
2- 2 kelimenin ortak harf sayısını hesaplayan ve bunu
adresle gönderen fonksiyon yazın.*/

int get_len(char *a, int *sp)
{
    int i;

    i = 0;
    while (a[i] != '\0')
    {
        if (a[i] == ' ')
            *sp = i;
        i++;
    }
    return (i);
}

void same_word(char *a,int len,int *sp, int *flag)
{
    int i;
    int j;

    i = 0;
    *flag = 0;
    while (i < *sp)
    {
        j = *sp + 1;
        while (a[j] != '\0')
        {
            if (a[i] == a[j])
                *flag = *flag + 1;
            j++;
        }
        i++;
    }
}

int main()
{
    char a[50];
    int len;
    int sp;
    int flag;
    int i,j,x;

    printf("Lutfen iki kelime giriniz: ");
    gets(a);

    len = get_len(a,&sp);
    printf("girilen kelimelerin uzunlugu: %d\n",len);
    same_word(a,len,&sp,&flag);
    printf("girilen kelimelerde ortak harf sayisi: %d",flag);
}
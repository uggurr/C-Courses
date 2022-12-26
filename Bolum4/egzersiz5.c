#include <stdio.h>
#include <stdlib.h>

/*-5 adet fonksiyon yazın;
*kullanıcıya karakter dizisi girdiren bir 
fonksiyon yazın
*kullanıcın girdiği karakter dizisindeki 
boşlukları kaldıran bir fonksiyon yazın
*karakter dizisindeki karakterlerin yerlerini sondan 
başa doğru değiştiren bir fonksiyon yazın
*Bir tane palendrom fonksiyonu yazın. Bu fonksiyon 
karakter dizinin baştan sona ve sondan başa yazımında
aynı karakter dizi olmadığını kontrol etsin. 
palendromsa 1 göndersin, değilse 0 göndersin*/

void create_string(char *b)
{
    //gets(b); basit yöntem
    //-----------------------
    int i;

    i = 0;
    scanf("%c",&b[i]);
    while ((b[i] != '\n'))
    {
        i++;
        scanf("%c",&b[i]);
    }
    b[i] = '\0';
    
}
void remove_space(char *str)
{
    int i,j;
    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if( str[i] != 32)
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    j = 0;
    while (str[j] != '\0')
    {
        printf("%c",str[j]);
        j++;
    }
}

void change_string(char *str)
{
    int i,j,len;
    char x[50];
    i = 0;
    while (str[i] != '\0')
        i++;
    len = i;
    j = 0;
    len--;
    while(len >= 0)
    {
        x[j] = str[len];
        j++;
        len--; 
    }
    x[j] = '\0';

    i = 0;
    while (x[i] != '\0')
    {
        printf("%c",x[i]);
        i++;
    }
}

int palendrom(char *str)
{
    int i,j,len;

    i = 0;
    while(str[i] != '\0')
        i++;
    len = i;

    j = 0;
    len--;
    while(str[j] != '\0')
    {
        if(str[j] == str[len])
        {
          return 1;
        }
        len--;
        j++;
    }
    return(0);
}

int main()
{
    char a[50];
    char x[50];
    int i;
    printf("Lutfen bir cumle girin: ");
    create_string(a);

    remove_space(a);
    printf("\n--------------\n");
    change_string(a);
    printf("\n--------------\n");
    i = palendrom(a);
    printf("%d",i);
    
}

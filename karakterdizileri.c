#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[] = {'m','e','r','h','a','b','a','\0'};
    char dizi2[] = "merhaba";
    char dizi3[50];
    /*dizi arrayindeki gibi karakterleri tek tek girmek
    istersek arrayin sonuna NULL koymalıyız
    metin şeklinde girersek otomatik olarak konulur*/

    printf("%s\n",dizi);
    printf("%s\n",dizi2);
  
    printf("Lutfen isminizi giriniz: ");

    scanf("%s",&dizi3);

    printf("Girdiginiz isim: ");
    printf("%s",dizi3);

}
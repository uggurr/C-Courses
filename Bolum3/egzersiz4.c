#include <stdio.h>
#include <stdlib.h>

/*Kullanıcının girdiği harfin alfabede kaçıncı harf
olduğunu bulan C programını yazınız.(İngiliz alfabesi)*/

int main()
{
    char harf;
    int r;

    printf("Lutfen Buyuk ya da Kucuk bir harf giriniz: ");
    scanf("%c",&harf);

    if(harf >= 65 && harf <= 90)
    {
        r = (harf - 65) + 1;
        printf("Girdiginiz sayi %d. harftir.",r);
    }
    else if (harf >= 97 && harf <= 122)
    {
        r = (harf - 97) + 1;
        printf("%c Alfabede %d. harftir.",harf,r);
    }
    else
        printf("Lutfen bir harf giriniz");
}
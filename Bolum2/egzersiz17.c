#include <stdio.h>
#include <stdlib.h>
#define FIAT 40

/*Halının metrekaresi 40 TL 
Alınacak işçilik 200 TL 
Buna göre metrakareyi girdi olarak alan ve 
halıcıya ödenmesi gereken toplam tutarı hesaplayan
C programını yazınız*/

int main()
{
    float m,i,s;

    printf("Halinin metrekaresini giriniz: ");
    scanf("%f",&m);

    i = 200;
    s = m * FIAT + i;

    printf("Odenmesi gereken tutar: %.2f",s);
}
#include <stdio.h>
#include <stdlib.h>

/*Kullanıcıdan 3 farklı tam sayı girmesini isteyen, 
kullanıcının girdiği bu sayıları okuyup sayıların 
en küçüğünü ve en büyüğünü ekrana bastıran C 
programını yazınız.*/

int main()
{
    /* 1. algoritma
    int a,b,c;
    int enBuyuk,enKucuk;

    printf("Lutfen Uc farkli sayi giriniz: ");
    scanf("%d%d%d",&a,&b,&c);

    if((a > b) && (a > c))
        enBuyuk = a;
    else if(b > c)
        enBuyuk = b;
    else
        enBuyuk = c;

    if((a < b) && (a < c))
        enKucuk = a;
    else if(b < c)
        enKucuk = b;
    else
        enKucuk = c;

    printf("En Buyuk Sayi: %d\n",enBuyuk);
    printf("En kucuk Sayi: %d\n",enKucuk);
    */

    // 2. algoritma
    int a,b,c;
    int enBuyuk,enKucuk;

    printf("Lutfen Uc farkli sayi giriniz: ");
    scanf("%d%d%d",&a,&b,&c);

    enBuyuk = a;
    if(b > enBuyuk)
        enBuyuk = b;
    else if(c > enBuyuk)
        enBuyuk = c;

    enKucuk = a;
    if(b < enKucuk)
        enKucuk = b;
    else if(c < enKucuk)
        enKucuk = c;

    printf("En Buyuk Sayi: %d\n",enBuyuk);
    printf("En kucuk Sayi: %d\n",enKucuk);
}
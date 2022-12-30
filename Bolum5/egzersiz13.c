#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Bilgisayar tarafından rastgele üretilen N 
(kullanıcının girdiği sayi) adet sayı 
bir dizide tutulmaktadır. Dizi içerisindeki maksimum
ve minimum değeri iki ayrı fonksiyon kullanarak ekrana 
yazdıran C programını yazınız.*/

void isBigger(int *r, int a)
{
    int flagB,flagK,i;

    flagB = r[0];
    flagK = r[0];
    printf("Uretilen sayilar\n");
    printf("---------------------\n");
    printf("%d\n",r[0]);
    i = 1;
    while(i < a)
    {
        printf("%d\n",r[i]);

        if (r[i] > flagB)
            flagB = r[i];
        if (r[i] < flagK)
            flagK = r[i];
        i++;
    }
    printf("---------------------\n");
    printf("En buyuk sayi: %d\n",flagB);
    printf("En Kucuk sayi: %d",flagK);
}

void produceNumber(int a)
{
    /*<time.h> kütüphanesinden srand fonksiyonu 
    kullanılmadığında rand() fonksiyonu program her
    çalıştığında aynı sayıyı üretiyor.*/
    srand(time(NULL));
    int i;
    int r[100];

    i = 0;
    while(i < a)
    {
        /*rand fonksiyonu integer deger aralığında
        random sayi üretir. fonksiyondan 
        sonra % 300 -> 0 ile 300 arasında random sayi
        üretir. */ 
        r[i] = rand() % 300;
        i++;
    }
    isBigger(r,a);
}

int main()
{
    int a,i;
    int r[100];
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&a);

    produceNumber(a);
}
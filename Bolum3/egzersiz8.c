#include <stdio.h>
#include <stdlib.h>
#define OKUS 0.012
#define OTAVSAN 0.038
/*Bir çiftlikle tavşanların sayısı 1042 iken,
kuşların sayısı 2272'dir. Bir yılda tavşanlar %3.8
oranında çoğalırken, kuşlar %1.2 oranında çoğalmaktadır
tavşanların kuşların sayısını kaç yıl sonra geçeceğini 
bulan C programı yazınız.*/

int main()
{
    float tavsan = 1042,kus = 2272;
    int yil = 0;
    while (tavsan < kus)
    {
        tavsan += tavsan + OTAVSAN;
        kus += kus * OKUS;
        yil++;
        printf("%d. yil tavsan = %.2f, kus = %.2f",yil,tavsan,kus);

    }
    printf("Tavsanlar kuslrai %d. yilda gecer.",yil);
    
}
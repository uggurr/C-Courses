#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullanıcıdan 3 adet sayı alınız.
    //Kullanıcıdan alınan sayıların en büyüğünü ekrana yazdırınız.

    int sum;
    int sum2;
    int sum3;
    int flag;

    printf("Ilk sayiyi giriniz: ");
    scanf("%d",&sum);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d",&sum2);
    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d",&sum3);

    flag = sum;
    if(sum > sum2 && sum > sum3)
    {
        printf("En buyuk sayi: %d",sum);
    }
    else if(sum2 > sum && sum2 > sum3)
    {
        printf("En buyuk sayi: %d", sum2);
    }
    else if(sum3 > sum && sum3 > sum2)
    {
        printf("En buyuk sayi: %d", sum3);
    }
    else{
        printf("Sayilar birbirine esittir");
    }
    
}
#include <stdlib.h>
#include <stdio.h>

/*Kullanıcı tarafından saniye olarak girilen bir
değerin saat:dakika:saniye (hh:mm:ss) formatına 
dönüştürülmesini sağlayan C programını fonksiyon 
kullanarak yazınız.*/

void hesapla(int sn)
{
    int saat,dk;

    saat = 00;
    dk = 00;
    if (sn > 60)
    {
        dk = sn / 60;
        sn = sn % 60;
    }  
    if (dk > 60)
    {
        saat = dk / 60;
        dk = dk % 60;
    }
        
    printf("%d Saat:%d Dakika:%d Saniye",saat,dk,sn);
}

int main()
{
    int sn;

    printf("Lutfen saniyeyi giriniz: ");
    scanf("%d",&sn);

    hesapla(sn);
}
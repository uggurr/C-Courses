#include <stdio.h>
#include <stdlib.h>
#define UCRET 0.25
#define EKUCRET 0.08
#define SURE 3
/*Bir telefon şirketi telefonda 3 dakikaya kadar
konuşmanın ücretini 0.25 TL olarak belirlenmiştir.
Ancak şirket, konuşma süresi 3 dakikayı aştığı 
durumda bundan sonraki her dakika için ek olarak 
0.08 TL almaktadır. Telefon görüşmesinin süresini 
dakika cinsinden girdi olarak alan ve konuşmanın 
ücretini hesaplayan C programını yazınız*/

int main()
{
    float dk,r;

    printf("Lutfen kac dk konustugunuzu giriniz: ");
    scanf("%f",&dk);

    if (dk < 0)
        printf("lutfen gecerli bir sure giriniz.");
    else if (dk <= 3)
    {
        r = UCRET;
        printf("Ucretiniz: %.2f TL'dir",r);
    }
    else
    {
        r = UCRET + ((dk - SURE) * EKUCRET);
        printf("Ucretiniz : %.2f TL'dir.",r); 
    }
}
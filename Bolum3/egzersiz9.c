#include <stdio.h>
#include <stdlib.h>
#define VERKI 0.04
#define VERTEM 0.056
#define VERLUKS 0.196
/*
-Üç adet ürünümüz var: Kitap, Temel Gıda ve Lüks
-Devlet her üç guruba farklı oranlarda vergi uyguluyor.
Kitap için %4.0, temel gıda için %5.6, Lüks ürün için
%19.6
-Her Ürünün bir kodu var: Kitabın kodu 0, temel gıdanın 
kodu 1, Lüks ürünün kodu 2
-Kullanıcıdan istediğiniz ürünün kodunu ve fiyatını 
isteyen daha sonra Switch case yapısını kullanarak son
fiyatı ekrana bastıran C programını yazınız.
*/

int main()
{
    int id;
    float fiyat,r1,r2;

    printf("Lutfen bir ID numarasi giriniz: ");
    scanf("%d",&id);
    printf("Lutfen bir fiyat giriniz: ");
    scanf("%f",&fiyat);

    switch (id)
    {
    case 1:
        printf("Sectiginiz ID Kitap kategorisidir.\n");
        printf("Uygulanan vergi orani = %%4\n");
        r1 = fiyat * VERKI;
        r2 = fiyat + (fiyat * VERKI);
        printf("Vergi: %.2f\n",r1);
        printf("Toplam: %.2f",r2);
        break;
    case 2:
        printf("Sectiginiz ID Temel Gida kategorisidir.\n");
        printf("Uygulanan vergi orani = %%5.6\n");
        r1 = fiyat * VERTEM;
        r2 = fiyat + (fiyat * VERTEM);
        printf("Vergi: %.2f\n",r1);
        printf("Toplam: %.2f",r2);
        break;
    case 3:
        printf("Sectiginiz ID Luks kategorisidir.\n");
        printf("Uygulanan vergi orani = %%19.6\n");
        r1 = fiyat * VERLUKS;
        r2 = fiyat + (fiyat * VERLUKS);
        printf("Vergi: %.2f\n",r1);
        printf("Toplam: %.2f",r2);
        break;
    default: printf("Lutfen 1-3 arasinda bir ID giriniz.");
        break;
    }
}
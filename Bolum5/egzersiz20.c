#include <stdio.h>
#include <stdlib.h>

/*Kullanıcı tarafından bölünen ve bölen değerleri
girilerek bölme işlemi yapılmak istenmektedir.
Buna göre bolum ve kalanın elde edilmesini sağlayan 
C programını fonksiyon kullanarak yazınız.*/

void bolmeIslemi(int bolunen,int bolen)
{
    if ((bolunen < bolen) || (bolen == 0))
        printf("bolunen, bolenden kucuk olamaz ya da bolen 0 olamaz\n");
    else
    {
          int bolum,kalan;

        bolum = bolunen / bolen;
        kalan = bolunen % bolen;

        printf("Bolme isleminin bolumu = %d\n",bolum);
        printf("Bolme isleminin kalani = %d\n",kalan); 
    }
  

}

int main()
{
    int bolunen,bolen;

    printf("Lutfen bolunen degerini giriniz: ");
    scanf("%d",&bolunen);

    printf("Lutfen bolen degerini giriniz: ");
    scanf("%d",&bolen);

    bolmeIslemi(bolunen,bolen);
}
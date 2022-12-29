#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen iki tam sayıdan büyük olanını 
fonksiyon kullanarak bulan C programını yazınız*/

void buyukMu(int a,int b)
{
    if (a > b)
        printf("%d %d'den buyuktur",a,b);
    else if (b > a)
        printf("%d %d'den buyuktur",b,a);
    else
        printf("Sayilar esittir");

}

int main()
{
    int a,b;

    printf("Lutfen iki adet sayi girniz: ");
    scanf("%d%d",&a,&b);

    buyukMu(a,b);
}
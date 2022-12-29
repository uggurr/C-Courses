#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen sayinin tek ya da çift olduğunu 
fonksiyon yardımıyla bulan C programını yazınız*/

int tekMi(int a)
{
    if (a % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    int a,b;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&a);

    b = tekMi(a);

    if(b == 1)
        printf("Sayi tektir");
    else
        printf("ssayi cifttir");
}
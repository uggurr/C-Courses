#include <stdio.h>
#include <stdlib.h>

/*klavyeden girilen bir tam sayinin faktoriyelini
fonksiyon kullanarak hesaplayan C programı yazınız.*/

int faktoriyel(int x)
{
    int r,i;

    i = 1;
    r = 1;
    while (i < x)
    {
        r += r * i;
        i++;
    }
    return r;
}


int main()
{
    int sayi;
    int faktoriyel_sonuc;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    faktoriyel_sonuc = faktoriyel(sayi);
    printf("Sayinin faltoriyeli = %d",faktoriyel_sonuc);
}
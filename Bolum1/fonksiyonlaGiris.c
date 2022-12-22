#include <stdio.h>
#include <stdlib.h>

void tekMiCiftMi(int i)
{
    if (i % 2 == 0)
        printf("%d Sayisi cifttir\n",i);
    else
        printf("%d sayisi cifttir",i);
}


int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    tekMiCiftMi(sayi);
}
/*İki tip fonksiyon vardır değer döndüren fonksiyonlar 
ve değer döndürmeyen fonksiyonlar 
eğer biz değer döndürmeyen fonksiyon kullanıyorsak 
bu fonksiyonun tipi void olmalıdır.
değer döndüren bir fonskiyon kullanıyorsak bu 
fonksiyonun tipi döndüreceğimiz değerin tipi ne ise o 
olmalıdır.*/
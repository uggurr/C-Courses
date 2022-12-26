#include <stdlib.h>
#include <stdio.h>

/*Klavyeden girilen iki tam sayının toplamını 
fonksiyon kullanarak hesaplayan C pogramını yazınız.*/

int topla(int x, int y)
{
    int r;

    r = x + y;
    return (r);
}

int main()
{
    int a,b;

    int sonuc;
    printf("Lutfen iki adet sayi giriniz: ");
    scanf("%d%d",&a,&b);

    sonuc = topla(a,b);
    printf("Toplam = %d",sonuc);

}
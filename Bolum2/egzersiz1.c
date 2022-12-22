#include <stdio.h>
#include <stdlib.h>

/*Kullanıcıdan girilmesini istediği a,b,c ve x
değişkenlerini kullanarak aşağıdaki aritmetik
işlemin sonucu hesaplayan ve ekrana basan C
programını yazınız
ax^2 + bx + c */

/*Not: Hesaplamınızı doğrudan printf() üzerinde 
yapabilrisiniz.*/
int main()
{
    int a,b,c,x,sonuc;

    printf("Lutfen a, b, c ve x sayilarini giriniz: ");
    scanf("%d %d %d %d",&a,&b,&c,&x);

    sonuc = (a*(x*x))+(b*x)+c;
    printf(" Sonuc: %d",sonuc);
}
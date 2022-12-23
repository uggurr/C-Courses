#include <stdio.h>
#include <stdlib.h>

/*Kullanıcı tarafından girilen reel bir sayının aşağıda
verilen f fonksiyonuna göre f(x) değerini hesaplayıp
döndüren bir program yazınız.
f(x) = x^3 + 13x^2 + 47x + 3*/

int main()
{
    float num,result;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%f",&num);

    result = (num * num * num) + (13 * (num * num)) + (47 * num) + 5;
    printf(">> f(%.3f) = %.3f",num,result);
}
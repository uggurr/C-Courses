#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = arr;

    //arr arrayinin birinci elemanının adresi
    printf("%d",ptr);

    //arr arrayinin birinci elemanı
    printf("%d",*ptr);

    //arr arrayinin ikinci elemanının adresi
    printf("%d",ptr + 1);

    //arr arrayinin ikinci elemanı
    printf("%d",*(ptr + 1));

    /*Örneğin arr arrayinin ilk elemanının adresi
    1004 olsun. ikinci adres ise 1008 dir. Biz arr 
    arrayinin ikinci elemanının adresini yazdırmak 
    istediğimizde ptr + 1 yaparız. ptr + 1 dediğimizde 
    adres 1005 olmaz. Pointer aritmetiğinde ptr + (k * n) 
    olarak hesaplanır.
    k = 4 (arrayin tipinin byte uzunluğu) 
    n = 1 olur. 
    yani ptr + (4 + 1) olur ve 1008 bulunur.
    arr arrayinin tipi double olsaydı ikinci adres 
    1012 olurdu (double 8 byte dır). ve pointer 
    aritmatiğinden ptr + (k * n) -> ptr + (8 * 1)
    ile ikinci adrese gidilir*/
}
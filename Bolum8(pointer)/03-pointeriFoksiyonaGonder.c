#include <stdio.h>
#include <stdlib.h>
/*Pointerlar adres üzerinden işlem yaptıklarından 
bir pointerı fonksiyona gönderdiğimizde dönüş değeri
almadan o pointerın yeni değerini yazdırabiliriz.*/

void degistir(int *a, int *b)
{
    *a = 15;
    *b = 25;
}

int main()
{
    int a,b;

    a = 10;
    b = 20;
    printf("Fonksiyondan once: %d %d\n",a,b);
    degistir(&a,&b);
    printf("Fonksiyondan sonra: %d %d",a,b);
}
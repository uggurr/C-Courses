#include <stdio.h>
#include <stdlib.h>

/*1 den 10 a kadar her bir sayının faktoriyelini 
fonksiyon kullanarak hesaplayan C programını yazınız.*/

int faktoriyelHesap(int x)
{
    int i;
    int sonuc = 1;

    for(i=1;i<=x;i++)
    {
        sonuc = sonuc * i;
    }
    return sonuc;
}


int main()
{
    int i;

    i = 1;
    while (i <= 10)
    {
        printf("%d! = %d\n",i,faktoriyelHesap(i));
        i++;
    }
}
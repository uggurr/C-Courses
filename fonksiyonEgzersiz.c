#include <stdio.h>
#include <stdlib.h>

int toplam(int x, int y)
{
    int sum;

    sum = x + y;
    return (sum);
}

int fark(int x, int y)
{
    int sum;

    sum = x - y;
    return (sum);
}

int bolum(int x, int y)
{
    int sum;

    sum = x / y;
    return (sum);
}

int carpma(int x, int y)
{
    int sum;

    sum = x * y;
    return (sum);
}

int main()
{
    /*Klavyeden girilen iki tamsayının toplamını,
    farkını,çarpımını ve bölümünü gerçekleştiren C 
    programını fonksiyon kullanarak yazınız*/

    int sayi1,sayi2;
    printf("lütfen birinci sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("lütfen ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);


    printf("toplam: %d\n",toplam(sayi1,sayi2));
    printf("fark: %d\n",fark(sayi1,sayi2));
    printf("bolum: %d\n",bolum(sayi1,sayi2));
    printf("carpım: %d",carpma(sayi1,sayi2));
}
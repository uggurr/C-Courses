#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*Bilgisayar tarafından rastgele üretilen N adet sayı 
bir dizide tutulmaktadır. Dizi içerisinde istenilen 
bir değerin dizideki sıra numarası girilerek ilgili 
sırada bulunan dizi değerinin silinmesini sağlayan 
C programını fonksiyon kullanarak yazınız.*/

int *delete(int *d, int n, int a)
{
    int i,j;

    i = 0;
    a--;
    while (i < a)
        i++;
    while (i < n)
    {
        d[i] = d[i+1];
        i++;
    }
    return d;
}

int main()
{
    srand(time(NULL));
    int n,i;
    int *d;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&n);

    printf("----------URETILEN SAYI--------\n");
    int num[n];
    i = 0;
    while (i < n)
    {
        num[i] = rand() % 300;
        printf("%d\n",num[i]);
        i++;
    }
    printf("----------SILINECEK SAYI---------\n");

    int a,b;
    printf("Lutfen silmek istediginiz sayiyi girin: ");
    scanf("%d",&a);
    
    printf("----------SILINDIKTEN SONRA ---------\n");
    d = delete(num,n,a);
    
    i = 0;
    n--;
    while (i <n)
    {
        printf("%d\n",d[i]);
        i++;
    }
}
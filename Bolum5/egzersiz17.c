#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Bilgisayar tarafından rastgele üretilen N adet sayı
bir dizide tutulmaktadır. Dizi içerisine dizi sıra 
numarası belirtilerek klavyeden alınan bir tam sayının 
ilgili sıraya eklenmesini sağlayan C programını
fonksiyon kullanarak yazınız.*/

void uret(int *d, int sira, int sayi, int n)
{
    int i;
    int j;
    sira--;
    j = n;
    if(sira < = n +1)
    {
        while (j  > sira)
        {
            d[j] = d[j-1];
            j--;
        }
        d[j] = sayi;
        i = 0;
        while (i <= n)
        {
            printf("%d\n",d[i]);
            i++;
        }
    }
    else
        printf("dizinin disarisinda bir deger girdiniz");
    
}

int main()
{
    int i,n;
    srand(time(NULL));
    
    printf("Kac adet sayi uretilsin: ");
    scanf("%d",&n);
    printf("------------URETILEN SAYILAR-----------\n");

    int d[n];
    i = 0;
    while (i < n)
    {
        d[i] = rand() % 100;
        printf("%d\n",d[i]);
        i++;
    }

    printf("------------------------------------\n");
    int sira,sayi;

    printf("Lutfen eklemek istedginiz sirayi girin: ");
    scanf("%d",&sira);
    printf("Lutfen eklemek istediginiz sayiyi girin: ");
    scanf("%d",&sayi);

    printf("-----------EKLENEN SAYI-------------\n");

    uret(d,sira,sayi,n);
}
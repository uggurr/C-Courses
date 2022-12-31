#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Bilgisayar tarafından rastgele üretilen N adet sayı
bir dizide tutulmaktadır. Dizi elemanlarını büyükten 
küçüğe sıralayan C programını fonksiyon kullanarak 
yazınız.*/

void sirala(int *d, int n)
{
    int i,j;
    int flag;
    i = 0;
    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            if (d[i] > d[j])
            {
                flag = d[i];
                d[i] = d[j];
                d[j] = flag;
            }
            j++;
        }
        
        i++;
    }
    i = 0;
    while(i < n)
    {
        printf("%d\n",d[i]);
        i++;
    }
    
}

int main()
{
    srand(time(NULL));
    int n,i;

    printf("Lutfen kac edet sayi uretilecegini girin: ");
    scanf("%d",&n);

    printf("---------URETILEN SAYILAR-------------\n");
    int d[n];
    i = 0;
    while(i < n)
    {
        d[i] = rand() % 100;
        printf("%d\n",d[i]);
        i++;
    }
    printf("-----------KUCUKTEN BUYUGE-----------\n");

    sirala(d,n);

}
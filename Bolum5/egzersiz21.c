#include <stdio.h>
#include <stdlib.h>

/*Kullanıcı tarafından n elemanlı bir diziye alınan 
tamsayıların ortalamasını bulan C programını fonksiyon 
kullanarak yazın*/

void ortalama(int *dizi, int n)
{
    int i,sum;
    float ort;
    i = 0;
    sum = 0;
    printf("dizi elemanlari = {");
    while (i < n)
    {
        printf("%2d,",dizi[i]);
        sum += dizi[i];
        i++;
    }
    printf("}\n");
    ort = (float)sum / (float)n;
    printf("Ortlama = %.2f",ort);
}

int main()
{
    int n,i;

    printf("Lutfen dizinin boyutunu giriniz: ");
    scanf("%d",&n);

    int dizi[n];
    i = 0;
    while (i < n)
    {
        printf("dizinin %d. elemanini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
        i++;
    }

    ortalama(dizi,n);
}
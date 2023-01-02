#include <stdlib.h>
#include <stdio.h>

/*Kullanıcı tarafından girilen A ve B dizelerine
sırasıyla N ve K adet tamsayı girilmektedir. Bu iki
dizinin birleştirilerek tek bir dizide tutulmasını 
sağlayan C programını fonksiyon kullanarak yazınız.*/

void join(int *a, int *b, int n, int k)
{
    int i,x,j;
    x = n + k;
    int dizi[x];

    i = 0;
    while (i < n)
    {
        dizi[i] = a[i];
        i++;
    }
    j = 0;
    while (j < k)
    {
        dizi[i] = b[j];
        i++;
        j++;
    }
    i = 0;
    printf("Toplam dizinin elemanlari = {");
    while (i < x)
    {
        printf("%d,",dizi[i]);
        i++;
    }
    printf("}\n");
    
}

void getarg(int *a, int *b, int n, int k)
{
    int i,j;

    i = 0;
   
    while (i < n)
    {
        printf("Lutfen A dizisinin %d elemani giriniz: ",i+1);
        scanf("%d, ",&a[i]);
        i++;
    }

    j = 0;
    while (j < k)
    {
        printf("Lutfen B dizinin %d elemani giriniz: ",j+1);
        scanf("%d",&b[j]);
        j++;
    }

    printf("--------------------------------------------------\n");
    join(a,b,n,k);
}

int main()
{
    int n,k;
    printf("Lutfen A dizisinin kac elemanli olacagini giriniz: ");
    scanf("%d",&n);
    int a[n];

    printf("Lutfen B dizisinin kac eleamnli olacagini giriniz: ");
    scanf("%d",&k);
    int b[k];

    printf("--------------------------------------------------\n");
    getarg(a,b,n,k);
}
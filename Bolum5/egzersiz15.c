#include <stdio.h>
#include <stdlib.h>

/*Aşağıda verilen ekran görüntüsünün elde edilmesini
sağlayan C programını fonksiyon/fonksiyonlar kullanarak
yazınız.

satir sayisi giriniz: 4
   c
  ccc
 ccccc
ccccccc
 +++++
  +++
   +
*/

void altUcgen(int a, int c)
{
    int i,j,k;
    int bosluk,arti;
    i = 0;
    arti = c - 4;
    bosluk = 1;
    while (i < a)
    {
        j = 0;
        while (j < bosluk)
        {
            printf(" ");
            j++;
        }
        k = 0;
        while (k < arti)
        {
            printf("+");
            k++;
        }
        printf("\n");
        bosluk++;
        arti -= 2;
        i++;
    }
}

void ustUcgen(int a)
{
    int i,j,k;
    int bosluk,c;
    i = 0;
    c = 1;
    bosluk = a - 1;
    while (i < a)
    {
        j = 0;
        while (j < bosluk)
        {
            printf(" ");
            j++;
        }
        k = 0;
        while (k < c)
        {
            printf("C");
            k++;
        }
        printf("\n");
        bosluk--;
        c += 2;
        i++;
    }
    altUcgen(a,c);
}

int main()
{
    int a;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&a);

    ustUcgen(a);
}
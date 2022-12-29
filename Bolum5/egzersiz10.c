#include <stdio.h>
#include <stdlib.h>

/*Klavyden girilen sayiya kadar olan tek sayilari
ekrana bastıran C programını foksiyon kullanarak
yazınız*/

void tekSayilar(int a)
{
    int i;

    i = 1;
    while(i <= a)
    {
        if(i % 2 != 0)
            printf("%d\n",i);
        i++;
    }
}

int main()
{
    int a;

    printf("Lutfen bir adet sayi giriniz: ");
    scanf("%d",&a);

    tekSayilar(a);
}
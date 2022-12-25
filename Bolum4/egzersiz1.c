#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen bir cümledeki kelime sayısını bulan
C programını yazınız*/

int main()
{
    char a[100];
    int i,j;

    printf("Lutfen bir cumle giriniz: ");
    gets(a);
    /*scanf fonksiyonu boşluğa kadar değer alır. 
    gets fonksiyonu ise satırdaki tüm degeri alır.
    o sebeple gets kullandık*/

    i = 0;
    j = 1;
    while (a[i] != '\0')
    {
        if (a[i] == ' ')
        {
            j++;
        }
        i++;
    }
    printf("Kelime Sayisi: %d",j);
    
}
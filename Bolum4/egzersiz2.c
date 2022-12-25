#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen bir cümlenin kaç karakter olduğunu 
bulan C programı*/

int main()
{
    char a[100];

    int i,j;

    printf("Lutfen bir cumle giriniz: ");
    gets(a);

    i = 0;
    j = 1;
    while(a[i] != '\0')
    {
        if(a[i] == 32)
            j++;
        i++;
    }
    printf("Kelime sayisi = %d\n",i - (j -1));
    printf("Cumle sayisi = %d",j);
}
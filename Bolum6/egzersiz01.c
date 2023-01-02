#include <stdio.h>
#include <stdlib.h>

/*10 tane integer tipinde değer tutan bir dizi
tanımlayınız.
Dizinin tüm elemanlarını kullanıcı girmelidir.
Dizinin en büyük ve en küçük elemanlarını bulup 
ekrana bastırınız. For yapısı kullanınız*/

int main()
{
    int dizi[10];
    int i,flag,flag2;

    i = 0;
    while (i < 10)
    {
        printf("10 elemanli dizinin %d. elemanini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
        i++;
    }
    i = 0;
    printf("----------------------------------\n\n");
    printf("Dizinin eleamlari = {");
    while (i < 10)
    {
        printf("%d ",dizi[i]);
        i++;
    }
    printf("}\n\n");

    flag = dizi[0];
    flag2 = dizi[0];
    for (i = 1; i < 10; i++)
    {
        if (dizi[i] > flag)
            flag = dizi[i];
        else if (dizi[i] < flag2)
            flag2 = dizi[i];
    }
    printf("----------------------------------\n");
    printf("Dizinin en buyuk elemani = %d\n",flag);
    printf("Dizinin en kucuk elemani = %d",flag2);

}
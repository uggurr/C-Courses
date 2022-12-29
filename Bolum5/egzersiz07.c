#include <stdio.h>
#include <stdlib.h>

/*Kendisi hariç pozitif tam bölenlerinin toplamı 
kendisine eşit olan sayılara mükemmel sayı denir.
Buna göre klavyeden girilen bir sayının mükemmel sayı 
olup olmadığını fonksiyon kullanarak bulan C 
programını yazınız.*/

int mukemmelMi(int a)
{
    int result,i,j;
    int sayi[100];

    i = 1;
    j = 0;
    while (i < a)
    {
        if(a % i == 0)
        {
            sayi[j] = i;
            j++;
        }
        i++;
    }
    /* Burada a nın i ye modu 0 ise direkt toplama yaparak aşağıdaki 
    işlemleri yapmaktan kurtulunabilir.*/
    result = 0;
    j = 0;
    while (result < a)
    {
        result += sayi[j];
        j++;
    }
    
    if (a == result)
        return(1);
    return(0);


}

int main()
{
    int a;
    int b;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&a);

    b = mukemmelMi(a);
    if (b == 1)
        printf("Girdiginiz sayi mukemmel sayidir");
    else if(b == 0)
        printf("Girdiginiz sayi mukemmel sayi degildir");
}
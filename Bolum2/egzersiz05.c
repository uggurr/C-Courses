#include <stdio.h>
#include <stdlib.h>

/*Kullanıcının girdiği 2 tam sayıdan, ilkinin ikincisi
ile karşılaştırılıp eşit olup olmadığını, eğer eşit
değilse ikincisinin katı olup olmadığını ekrana 
yazdıran C programını yazınız*/

int main()
{
    int num1,num2;

    printf("Lutfen iki adet sayi giriniz: ");
    scanf("%d%d",&num1,&num2);

    if (num1 == num2)
        printf("Sayilar birbirine esittir.");
    if (num1 > num2)
    {
        printf("%d ile %d birbirine esittir degildir.\n",num1,num2);
        printf("%d %d den buyuktur\n",num1,num2);
        if (num1 % num2 == 0)
            printf("%d %d nin katidir.",num1,num2);

    }
    else
    {
        printf("%d %d den buyukdegildir\n",num1,num2);
        printf("%d %d nin kati değildir.",num1,num2);
    }
}
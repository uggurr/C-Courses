#include <stdio.h>
#include <stdlib.h>

/*Kullanıcının girdiği 2 tam sayıdan, ilkinin ikincisi
ile karşılaştırılıp eşit olup olmadığını, eğer eşit
değilse ikincisinden büyük mü yoksa küçük mü olduğunu
ekrana yazdıran C programını yazınız*/

int main()
{
    int num1,num2;

    printf("Lutfen iki adet sayi giriniz: ");
    scanf("%d%d",&num1,&num2);

    if (num1 == num2)
        printf("Sayilar birbirine esittir.");
    else if (num1 > num2)
    {
        printf("%d ile %d birbirine esittir degildir.\n",num1,num2);
        printf("%d buyuktur %d", num1,num2);
    }
    else
    {
        printf("%d ile %d birbirine esittir degildir.",num2,num1);
        printf("%d buyuktur %d", num2,num1);
    }
}
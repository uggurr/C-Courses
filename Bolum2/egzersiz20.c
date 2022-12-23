#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*kullanıcıdan büyük harf girmesini isteyiniz
büyük harfse küçük yap, değilse hata mesajı veren
C programını yazınız*/

int main()
{
    char harf;

    printf("Lutfen Buyuk harf giriniz: ");
    scanf("%c",&harf);

    if(harf >= 65 && harf <= 90)
    {
        harf += 32;
        printf("%c",harf);
    }
    else
        printf("Lutfen buyuk harf giriniz...");
}
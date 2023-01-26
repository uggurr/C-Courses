#include <stdio.h>
#include <stdlib.h>

/*bir Fonksiyon yazın. Bu fonksiyon; toplama, çıkartma,
çarpma, bölme temel dört işlemleri yapsın.
-C progamını değişkenin aresini çağırarak yazınız.*/

void dort_islem(int *a, int *b, char *c)
{
    int result;

    switch (*c)
    {
    case '+':
        result = *a + *b;
        printf("islem Sonucu: %d",result);
        break;
    case '-':
        result = *a - *b;
        printf("islem Sonucu: %d",result);
        break;
    case '*':
        result = *a * *b;
        printf("islem Sonucu: %d",result);
        break;
    case '/':
        result = *a / *b;
        printf("islem Sonucu: %d",result);
        break; 
    default:
        printf("lutfen gecerli bir islem giriniz.");
        break;
    }
}

int main()
{
    char c;
    int a,b;
    printf("islem (+, -, *, /): ");
    scanf("%c",&c);

    printf("Lutfen birinci sayiyi giriniz: ");
    scanf("%d",&a);
    
    printf("Lutfen ikinci sayiyi giriniz: ");
    scanf("%d",&b);
    dort_islem(&a,&b,&c);
}
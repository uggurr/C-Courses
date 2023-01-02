#include <stdio.h>
#include <stdlib.h>

/*Kullanıcı tarafından derece olarak girilen bir
değerin fahrenayt'a fahrenayt olarak girilen bir 
değerin dereceye çevrilmesini sağlayan C programını 
fonksiyon kullanarak yazınız*/

void hesapla(char a, int b)
{
    float c;
    int f;
    if (a == 'F' || a == 'f')
    {
        c = ((float)b - 32) / 1.80;
        printf("%d Fahrenheit = %.3f Celcius",b,c);
    }
    else if (a == 'C' || a == 'c')
    {
        f = (1.8 * b) + 32;
        printf("%d Celcius = %d Fahrenheit",b,f);
    }
    else
        printf("Fahrenheit = F & f, Celcius = C & c Secimlerinden birisini yapiniz\n");
}

int main()
{
    char a;
    int b;
    printf("Fahrenheit = F & f, Celcius = C & c\n");
    printf("Lutfen sicaklik birimini giriniz: ");
    scanf("%c",&a);

    printf("Lutfen degeri giriniz: ");
    scanf("%d",&b);

    hesapla(a,b);
}
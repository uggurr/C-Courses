#include <stdlib.h>
#include <stdio.h>

/*Klavyeden girilen sayi kadar fibonacci dizisi üreten
C programını fonksiyon kullanarak yazınız*/

void fibonacci(int x)
{
    int i;
    int a,b,d;
    a = 0;
    b = 1;
    i = 0;
    while (i < x)
    {
        if(i <= 1)
            d = i;
        else
        {
            d = a + b;
            a = b;
            b = d;

        }
        printf("%d\n",d);
        i++;
    }
    
}

int main()
{
    int x;

    printf("Lutfen bir adet sayi giriniz: ");
    scanf("%d",&x);

    fibonacci(x);
}
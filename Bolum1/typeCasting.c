#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi1 = 9/4;
    printf("%f\n",sayi1);
    /*Yukarıdaki işlemde işlem sonucu 2.25 
    olmasına rağmen ve değişken tipi float 
    olmasına rağmen sonucu 2.00 olarak yazdırır.*/

    float sayi2 = (float)9/4;
    printf("%f",sayi2);

    /*Yukarıda işlemle biz iki integer sayının 
    birbirine bölümü floata castlediğimiz için 
    doğru sonucu elde ederiz.*/
}
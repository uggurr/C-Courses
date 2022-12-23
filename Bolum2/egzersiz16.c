#include <stdio.h>
#include <stdlib.h>

/*A ve B değişkenlerine iki tam sayıyı girdi olarak
alan ve yerini değiştiren C programını yazınız*/

int main()
{
    int a,b,c;
    printf("Lutfen iki adet sayi giriniz: ");
    scanf("%d%d",&a,&b);

    printf("Onceki %d  %d\n",a,b);
    c = a;
    a = b;
    b = c;

    printf("sonraki: %d  %d",a,b);

    
}
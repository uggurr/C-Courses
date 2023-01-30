#include <stdio.h>
#include <stdlib.h>

/*pointer kullanarak iki sayıyı toplayınız*/

int main()
{
    int a,b,sonuc;
    int *p1,*p2;

    p1 = &a;
    p2 = &b;

    printf("Lutfen iki adet sayi giriniz: ");
    scanf("%d %d",&a,&b);

    sonuc = *p1 + *p2;
    printf("%d",sonuc);
}
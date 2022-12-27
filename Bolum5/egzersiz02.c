#include <stdio.h>
#include <stdlib.h>

/*klavyeden girilen iki tam sayının toplamını,farkını
çarpımını ve bölümünü gerçekleştiren C programını
fok-nksiyon kullanarak yazınız.*/

void dortIslem(int x,int y)
{
    int t,f,b,c;

    t = x + y;
    f = x - y;
    b = x / y;
    c = x * y;

    printf("Toplam = %d\n",t);
    printf("fark = %d\n",f); 
    printf("bolum = %d\n",b); 
    printf("carpim = %d\n",c); 

}

int main()
{
    int a,b;

    printf("Lutfen iki adet sayi giriniz: ");
    scanf("%d%d",&a,&b);

    dortIslem(a,b);
}
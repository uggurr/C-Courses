#include <stdio.h>
#include <stdlib.h>

/*Kullanıcıdan aldığı tam sayı kenar uzunlukları (a,b)
ve yükseklik (h) bilgisini kullanarak bir gikdörtgen
prizmanın sırasıyla taban alanını, yanal alanlarının 
toplamını, toplam alanını ve hacmini ekrana bastıran 
C Kodunu yazınız*/

int main()
{
    int a,b,h;
    int tabanA,yanalA,toplamA,hacim;
    printf("Dikdortgenler prizmanin kisa kenarini giriniz: ");
    scanf("%d",&a);

    printf("Uzun kenarini giriniz: ");
    scanf("%d",&b);

    printf("yuksekligini giriniz: ");
    scanf("%d",&h);

    //Taban alanı = a*b
    tabanA = a * b;
    //Yanal alan = Taban cevrasi + yükseklik => 2(a + b)*c
    yanalA = 2*(a + b) * h;
    //toplam alan = 2 * (a * b + a * h + b * h);
    toplamA = 2 * (a * b + a * h + b * h);
    //hacim = a * b * h;
    hacim = a * b * h;

    printf("----------------------------\n");
    
    printf("Digdortgen prizmanin;\n");
    printf("Taban alani: %d\n",tabanA);
    printf("yanal alanlar toplami: %d\n",yanalA);
    printf("Toplam alani: %d\n",toplamA);
    printf("Hacmi: %d\n",hacim);
}
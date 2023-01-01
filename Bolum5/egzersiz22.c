#include <stdio.h>
#include <stdlib.h>

/*Kullanıcı tarafından girilen N pozitif tamsayısının
karekökünü bulmasını sağlayan C programını fonksiyon 
kullarak yazın (sqrt fonksiyonu kullanılmamalıdır.)*/

double karekokbul(double n)
{
    double karekok;
    int i;
    if (n > 0.0)
    {
        karekok = n / 2;
        for (i = 0; i < 50; i++)
        {
            karekok = ((karekok * karekok) + n) / (2 * karekok);
        }
        return karekok;
    }
    else if (n == 0)
        return 0;
    else
        printf("Lutfen gecerli bir deger girin.");
}

int main()
{
    double n;
    double x;
    printf("Lutfen bir adet sayi giriniz: ");
    scanf("%lf",&n);

    x = karekokbul(n);
    printf("%.0lf karekoku = %.5lf\n",n,x);
}
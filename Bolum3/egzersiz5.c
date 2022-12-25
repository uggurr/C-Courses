#include <stdlib.h>
#include <stdio.h>

/*Pozitif tam sayı olan n değeri ile bir reel sayı 
x dedeğerini girdi olarak alan ve 
1/x^2 + 3/x^4 + ... + 2n - 1 / x^2n 
serisini hesaplayan programı yazınız*/

int main()
{
    int n,ussu;
    int i,j,s;
    float x,r;

    printf("Lutfen pozitif tam sayi giriniz: ");
    scanf("%d",&n);

    printf("Lutfen Reel Sayi giriniz: ");
    scanf("%f",&x);

    if(n < 0)
        printf("Lutfen pozitif bir sayi giriniz.");
    else
    {
        if(x < 0)
            printf("Lutfen reel sayi araliginde bir deger giriniz");
        else
        {
            ussu = 2 * n;
            i = 0;
            s = 1;
            while(i < ussu)
            {
                s = s * x;
                i++;
            }
            j = 1;
            while(j <= 2 * n - 1)
            {
                r += j / s;
                j += 2;
            }
            printf("seri: %.2f",r);
        }
    }
}
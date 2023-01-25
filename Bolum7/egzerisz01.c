#include <stdio.h>
#include <stdlib.h>

/*İki adet fonskiyon yazınız.
-1. Fonksiyon girilen sayının 2 nin katı olduğunu
gösterir.
-2 Fonksiyon girilen sayının 3 ün katı olduğunu gösterir

Bu iki fonksiyonu kullanarak bir C programı yazın. 
Bu program kullanıcının girdiği değerin cift olup
olmadığını ve 2 nin ya da 3 ün katı olup olmadığını
belirlesin.*/

int cift_mi(int a)
{
    if (a % 2 == 0)
        return (1);
    return (0);
}
int katlari(int a)
{
    if (a % 3 == 0)
       return(1);
    return (0);
}
int main()
{
    int a,b,c;

    printf("Lutfen bir adet sayi giriniz: ");
    scanf("%d",&a);

    b = cift_mi(a);
    if (b == 1)
        printf("Girdiginiz sayi cifttir.\n2'nin katidir.\n");
    else
        printf("girdiginiz sayi tekrir.\n");
    c = katlari(a);
    if (c == 1)
        printf("3'e tam bolunur.\n");
    if (b == 1 && c == 1)
        printf("6'ya tam bolunur.");
}
#include <stdio.h>
#include <stdlib.h>

/*Tek haneli 3 adet sayi olan x, y ve z yi girdi
olarak alan ve yüzler basamağına x, onlar basamağına
y, birler basamağına z koyan bir C programı yazınız*/

int main()
{
    int x,y,z,new;
    int yuzler,onlar,birler;
    printf("Lutfen 3 adet tek basamakli sayi giriniz: ");
    scanf("%d%d%d",&x,&y,&z);

    yuzler = x * 100;
    onlar = y * 10;
    birler = z;

    new = x + y + z;
    printf("Yeni 3 basamakli sayi: %d",new);
}
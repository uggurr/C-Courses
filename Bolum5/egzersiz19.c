#include <stdio.h>
#include <stdlib.h>

/*Kullanıcı tarafından girilen tamsayılar x ve y 
değişkenlerinde tutulmaktadır. x ve y değişkinlerinde 
yer alan değerlerin değiştirilmesini sağlayan C
programını fonksiyon kullanarak yazınız*/

void swap(int x,int y)
{
    int a;

    a = x;
    x = y;
    y = a;
    printf("Yer degistirilmis hali\n");

    printf("%d\n",x);
    printf("%d",y);

}

int main()
{
    int x,y;

    printf("Lutfen iki adet sayi giriniz: ");
    scanf("%d%d",&x,&y);

    swap(x,y);
}
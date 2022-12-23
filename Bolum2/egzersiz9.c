#include <stdio.h>
#include <stdlib.h>

/*Kullanıcıdan alınan iki tam sayının çarpımının 
işaretini, sayıları çarpmadan bulan C programını 
yazınız*/

int main()
{
    int x,y;
    int flag;
    printf("Lutfen iki adet sayi giriniz: ");
    scanf("%d%d",&x,&y);

    if(x > 0 && y > 0)
    {
        flag = 1;
        printf(">> sign(%d * %d) = +%d",x,y,flag);
    }
    if(x==0 || y == 0)
    {
        flag = 0;
        printf(">> sign(%d * %d) = %d",x,y,flag);
    }
    if(x < 0 || y < 0)
    {
        flag = -1;
        printf(">> sign(%d * %d) = %d",x,y,flag);
    }
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kullanıcıdan 2 adet 3 e ikilik matris değerlerini
    alınız bunları bir 3 boyutlu sayi dizine atayınız
    hangi indexte hangi değer olduğunu ekrana bastırın*/

    int dizi[2][3][2];
    int i,j,k;

    printf("Lutfen 12 adet sayi giriniz\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3;j++)
        {
            for(k = 0; k < 2; k++)
            {
                scanf("%d", &dizi[i][j][k]);
            }
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3;j++)
        {
            for(k = 0; k < 2; k++)
            {
                printf("dizi[%d][%d][%d] = %d\n",i,j,k,dizi[i][j][k]);
            }
        }
    }


}
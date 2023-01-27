#include <stdio.h>
#include <stdlib.h>

/*3 adet fonksiyon yazın.
Kullanıcıya bir matrisin elemanlarını girdiren
fonksiyon yazın.
Girdiğiniz matris değerlerinin en büyük ve en küçük 
elemanını ve girilen elemanların toplamını bulan bir 
fonksiyon yazın. Bu fonksiyonu main fonksiyonundan 
değişkenin adını çağırma yöntemiyle çağırın.
Elemanları girilen matrisi ekrana yazdırmaya yarayan
bir fonksiyon yazın.*/

void get_matris(int n, int m, int matris[n][m])
{
    int i,j;
    i = 0;
    while(i < n)
    {
        j = 0;
        while (j < m)
        {
            printf("%d. Satir %d. sutun elemanini girin: ",i + 1, j + 1);
            scanf("%d",&matris[i][j]);
            j++;
        }
        i++;
    }
}

void ft_print(int n, int m, int matris[n][m])
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < m)
        {
            printf("%4d",matris[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

void finder(int *min, int *max, int *sum, int n, int m, int matris[n][m])
{
    int i;
    int j;

    *min = matris[0][0];
    *max = matris[0][0];
    *sum = 0;
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            if (*min > matris[i][j])
                *min = matris[i][j];
            if (*max < matris[i][j])
                *max = matris[i][j];
            *sum += matris[i][j];
            j++;
        }
        i++;
    }
}

int main()
{
    int n,m;
    int min, max, sum;
    printf("Lutfen N * M formatinda bir matris girin: \n");
    printf("N = ");
    scanf("%d",&n);
    printf("M = ");
    scanf("%d",&m);
    int matris[n][m];
    get_matris(n, m, matris);

    ft_print(n, m, matris);

    finder(&min, &max, &sum, n, m, matris);
    printf("En buyuk sayi = %d\n", max);
    printf("En kucuk sayi = %d\n", min);
    printf("elemanlarin toplami = %d\n", sum);

    
}
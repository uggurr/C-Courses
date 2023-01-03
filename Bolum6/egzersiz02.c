#include <stdio.h>
#include <stdlib.h>
#define TEN 12

int main()
{
    int i;
    int j;
    int n;
    int dizi[TEN][TEN];
    printf("Kac sütunluk bir matris arzu edersiniz: ");
    scanf("%d",&n);
    printf("\n\np ");
    for(i = 0;i<n;i++)
    {
        printf("%2d",i);
    }
    printf("\nn\n");
    for (i = 0;i<=n;i++)
    {
        printf("--");
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        dizi[i][i]=1;
        dizi[i][0]=1;
        for (j = 1;j<i;j++)
        {
            dizi[i][j] = dizi[i-1][j]+dizi[i-1][j-1];
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d --",i);
        for (j = 0; j <= i;j++)
        {
            printf("%2d",dizi[i][j]);
        }
        printf("\n");
    }

}
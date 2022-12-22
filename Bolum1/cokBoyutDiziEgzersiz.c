#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1)N x N eleman içeren bir program yazınız.

    /* 2)N x P eleman içeren 2 matrisin elemanlarını
    toplayan bir C programı yazınız. Sonucu 3. bir 
    matrizte yazdırın*/

    // 1)

    int atama[10][10];

    int i,j;

    i = 0;
    while(i<10)
    {
        j = 0;
        while(j<10)
        {
            if(i == j)
                atama[i][j] = 1;
            else
                atama[i][j] = 0;
            j++;
        }
        i++;
    }

    i = 0;
    while(i<10)
    {
        j = 0;
        while (j<10)
        {
            printf("%4d",atama[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    printf("-------------------------------------\n");
    // 2)

    int dizi1[3][4] = {{1,2,3,4},{5,6,7,8},{9,1,2,3}};
    int dizi2[3][4] = {{3,4,2,1},{2,8,3,8},{0,7,6,1}};
    int dizi3[3][4];

    int x,y;

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 4; y++)
        {
            dizi3[x][y] = dizi1[x][y] + dizi2[x][y];
        }
    }
    
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 4; y++)
        {
            printf("%4d",dizi3[x][y]);
        }
        printf("\n");
    }
}
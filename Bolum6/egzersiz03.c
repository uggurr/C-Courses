#include <stdio.h>
#include <stdlib.h>

/*10 a 10 boyutunda bir çarpım tablosu oluşturun ve 
ekrana bastırın*/

int main()
{
    int i;
    int j;
    int dizi[10][10];

    printf("%4c",'I');
    for (i = 1; i <= 10; i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    printf("-------");
    for (i = 1;i <= 10; i++)
    {
        printf("----");
    }
    printf("\n");
    for ( i = 1; i <= 10; i++)
    {
        printf("%4d",i);
        for ( j = 1; j<=10; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>

/*floyd üçgenini fonksiyon yardımıyla oluşturan C
programını yazınız*/

void floyd(int a)
{
    int i;
    int j;
    int x;

    i = 1;
    x = 1;
    while(i < a)
    {
        j = 1;
        while (j <= i)
        {
            printf("%4d",x);
            x++;
            j++;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int a;

    printf("Lutfen floyd ucgeni icin satir sayisi giriniz: ");
    scanf("%d",&a);

    floyd(a);
}
#include <stdio.h>
#include <stdlib.h>

/*Kullanıcının girdiği bir n sayısına kadar olan 
tüm sayıların toplamını hesaplahyıp ekrana bastıran
programı yazınız*/

int main()
{
    int n,flag,i,j;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&n);

    flag = 0;
    i = 1;
    while (i <= n)
    {
        if(i == n)
            printf("%d",n);
        else
            printf("%d +",i);
        flag += i;
        i++;
    }
    printf(" = %d",flag);
}
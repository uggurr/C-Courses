#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kullanıcıdan bir sayı girmesini isteyiniz. 1 den 
    kullanıcının gireceği sayıya kadar olan sayıların 
    toplamını yazdıran programı for döngüsü ile yazınız.*/

    int i,d,sum;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&d);

    sum = 0;
    for(i = 1; i <= d; i++)
    {
        printf("%d ",i);
        sum = sum + i;
    }
    printf("\n Toplam: %d",sum);
}
#include <stdio.h>
#include <stdlib.h>

/*Kullanıcının girdiği sayının basamaklarını ekrana 
yazdıran c programını yazınız*/

int main()
{
    int num,top;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&num);

    printf("Birler basamagi: %d\n",num%10);
    printf("Onlar basamagi: %d",num/10);
}
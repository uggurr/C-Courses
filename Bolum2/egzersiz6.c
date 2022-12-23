#include <stdio.h>
#include <stdlib.h>

/*while döngüsü kullanarak kullanıcının girdiği sayının
faktoriel görünümünü ekrana yazdıran C programını yazınız*/

int main()
{
    int num;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&num);

    while (num > 0)
    {
        printf("%d ",num);
        num--;
    }
    
}
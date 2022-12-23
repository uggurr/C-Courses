#include <stdio.h>
#include <stdlib.h>

/*Kullanıcının girdiği sayı kadar kenar uzunluğuna
sahip karenin alanını hesaplayan C programını yazınız*/

int main()
{
    int num,res;

    printf("Lutfen kenar uzunluğunu giriniz: ");
    scanf("%d",&num);

    res = num * num;

    printf("Alan = %d",res);
}
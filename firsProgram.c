#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float num2;
    double num3;
    char str;
    int sayi;

    num = 10;
    num2 = 25.65;
    num3 = 28.6987;
    str = 'a';

    printf("%d %.2f %lf %c",num,num2,num3,str);
    printf("\n Lutfen bir sayi giriniz \n");
    scanf("%d", &sayi);
    printf("Girdiginiz sayi: %d",sayi);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kullanıcıdan girilen sayının tek mi çift mi olduğunu bulan prog.
    int num;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("Sayi cifttir");
    }
    else{
        printf("sayi tektir\n");
    }

    //Kişinin yasal olarak oy kullanıp kullanamayacağını hesaplayan prog.
    int age;

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d",&age);

    if (age >= 18)
        printf("Oy kullanabilirsiniz");
    else
        printf("Oy kullanamazsiniz");
}
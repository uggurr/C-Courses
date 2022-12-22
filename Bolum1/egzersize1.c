#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullanıcıdan 2 adet sayı ve isminin baş harfini alınız.
    //Bu aldığınız değerleri ekrana bastırınız.
    int num1;
    int num2;
    char c;

    printf("Lutfen ilk sayiyi giriniz: ");
    scanf("%d", &num1);
    printf("Lutfen ikinci sayiyi giriniz: ");
    scanf("%d", &num2);
    printf("Lutfen adinizin bas harfini giriniz: ");
    scanf("%s",&c);
    
    printf("Girdiginiz ilk sayi: %d ",num1);
    printf("Girdiginiz ikinci sayi: %d ",num2);
    printf("adinizin bas harfi: %c",c);

}
#include <stdio.h>
#include <stdlib.h>

/*klavyeden negatif bir değer girilinceye kadar
kullanıcıdan sürekli sayi isteyen C programını
fonksiyon kullanarak yazınız.*/
void get_number(int a)
{
    while(1)
    {
        printf("Lutfen bir sayi giriniz: ");
        scanf("%d",&a);
        if (a < 0)
            break;
    }
}

int main()
{
    int a;
    get_number(a);

}
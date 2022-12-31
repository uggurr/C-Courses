#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
/*Kullanıcı tarafından girilen yarıçağ değeri 
kullanılarak bir dairenin alanını ve çevresini
hesaplayan C programını fonksiyon kullanarak yazınız*/

void hesapla(float r)
{
    float alan,cevre;

    cevre = 2 * PI * r;

    alan = PI * r * r;

    printf("dairenin cevresi: %.2f\n",cevre);
    printf("dairenin alani: %.2f",alan);

}

int main()
{
    float r;

    printf("Lutfen hesaplamak istediginiz yaricapi giriniz: ");
    scanf("%f",&r);

    hesapla(r);
}
#include <stdio.h>
#include <stdlib.h>

/*kullanıcıdan uzaklığı ve zamanı girdi olarak alan
ve arabanın ortalama hızını hesaplayan C programını 
yazınız*/

int main()
{
    float uzaklik,zaman,hiz;

    printf("Lutfen Uzakligi giriniz: ");
    scanf("%f",&uzaklik);

    printf("Lutfen zamani giriniz: ");
    scanf("%f",&zaman);

    hiz = uzaklik / zaman;

    printf("Ortalama hiz: %.2f",hiz);
}
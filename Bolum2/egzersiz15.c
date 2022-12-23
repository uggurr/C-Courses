#include <stdio.h>
#include <stdlib.h>

/*bir havuzun enini, boyunu, yüksekliğini metre 
cindinden girdi olarak alan ve havuzun dolması için
ne kadar metreküp suya ihtiyac olduğunu hesaplayan C
programını yazın*/

int main()
{
    int en,boy,h,sonuc;
    printf("Lutfen sirasiyla havuzun enini, boyunu ve yuksekligini giriniz: ");
    scanf("%d%d%d",&en,&boy,&h);

    sonuc = en * boy * h;
    printf("Gerekli olan su %d metreküptür.",sonuc);
}
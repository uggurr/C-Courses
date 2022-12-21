#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];

    printf("Lutfen isminizi girniz: ");

    // gets(name);
    // printf("%s",name);

    /*Gets kullanımı pek tavsiye edilmeyen kullanımdır.,
    gets yerine fget fonksiyonunun kullanılması tercih 
    edilir.*/

    fgets(name,sizeof(name),stdin);
    /*ftgets fonksiyonunda üç adet parametre girmemiz 
    gerekir bunlar;
    karakter dizisinin ismi
    kaç karakter olacağı
    dosyanın pointer hali(biz standart input aldığımız
    için stdin dedik)*/
    printf("%s",name);
}
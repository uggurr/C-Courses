#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*string bir ifadeyi ters çevirmek istediğimde 
    kullanıyorum*/

    char a[100];

    printf("lutfen bir metin giriniz: ");
    scanf("%s",a);
    //bosluklu bir ifade girmek istersem fgets 
    //fonksiyonunu kullanabilirim
    printf("girdiginiz ifade: %s\n",a);
    strlwr(a);
    printf("girdiginiz ifadenin kucuk hali: %s",a);
}
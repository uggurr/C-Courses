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

    printf("girdiginiz ifadenin duz hali %s\n",a);
    strrev(a);
    printf("girdiginiz ifadenin ters hali: %s",a);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char a[] = "Ugur";
    char b[] = "uGUR";

    /*İkinci arrayi birinci arraye kopyalar*/
    char c[65];
    strcpy(c,a);
    /*ilk kısım kopyalanacak kısım. ikinci kısım
    kopyalanacak kısım*/
    printf("%s",c);
}
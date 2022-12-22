#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char a[] = "Ugur";
    char b[] = "uGUR";

    /*İki arrayi ascii kodlarına göre kıyaslar
    ilk array büyükse 1 küçükse -1 döndürür.
    eşitse 0 döndürür*/
    i = strcmp(a,b);
    printf("%d",i);
}
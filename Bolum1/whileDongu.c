#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    i = 0;
    while (i<5)
    {
        printf("%d ",i);
        i++;
    }
    /*Sonsuz döngü*/

    /*1 durumu her zaman doğrudur. 0 Durumu her zaman 
    yanlıştır.*/

    //sonsuza kadar çalışır. Koşul hep doğru.
    // while (1)
    // {
    //     printf("Sonsuz dongu");
    // }
    
    //Döngüye girmez. Koşul hep yanlış
    // while (0)
    // {
    //     printf("Dongu");
    // }
    
}
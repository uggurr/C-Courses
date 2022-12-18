#include <stdio.h>
#include <stdlib.h>

int main()
{
    //break komutu döngüyü kırar direkt dışına çıkar.
    //Continue komutu Komut atlar.

    /*1'den 10'a kadar sayıları ekrana yazdıran 
    programda 5 yazdırılmasın ve 8 de dursun 9 u 
    yazdırmasın. */

    for (int i = 0; i < 10; i++)
    {
        if(i == 5)
            continue;
        printf("%d ",i);
        if (i == 8)
            break;
    }
    
}
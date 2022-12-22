#include <stdio.h>
#include <stdlib.h>

int ussunu_al(int a,int b)
{
    int sonuc,i;

    sonuc = 1;
    i = 0;
    while(i < b)
    {
        sonuc = a * sonuc; 
        i++;
    }
    return (sonuc);
}


int main()
{
    /*int ussunu_al(int x,int y) fonksiyonunu yazınız
    Fonksiyon x ve y değerlerini parametre olarak
    alıyor ve x üzeri y değerini hesaplayıp sonucu
    döndürüyor. x = 4 ve y = 5 olduğunda sonuç olarak
    1024 döndürmesi gerekiyor.*/

    int x,y,z;

    x = 4;
    y = 5;
    z = ussunu_al(x,y);

    printf("%d",z);
}